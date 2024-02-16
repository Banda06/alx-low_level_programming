#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - function that appends text.
 * @filename: name of the file to create.
 * @text_content: pointer to the null terminated string to write to file.
 *
 * create the file if it does not exist.
 * if filename is NULL return -1.
 * If text_content is NULL, do not add anything to the file. Return 1 if,
 *
 * Return: 1 if successful, -1 if unsuccessful
 *
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t length = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
		length = write(file, text_content, inlen);
	}

	if (close(file) == -1 || inlen != length)
		return (-1);
	return (1);
}
