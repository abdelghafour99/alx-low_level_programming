#include <stdio.h>
#include "dog.h"

/*
 * init_dog - Initialize a dog structure
 *
 *@dog *d: the dog struct
 *@name: the name to attribut
 *@age: the age to attribut
 *@owner: the owner to attribut
 *
 *Return: always d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
