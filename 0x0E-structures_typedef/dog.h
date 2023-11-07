#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct dog - a NEW TYPE DESCRIBING a dog
 * @name: dog name
 * @owner: dog owner or member
 * @age: dog age
 */

struct dog
{
	char *name;
	float age;
	char *owner
};
/*
 * dog_t - type def for struct dog
 */
typedef strct dog dog_t;

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
