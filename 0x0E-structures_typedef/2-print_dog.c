#include <stdio.h>
#include "dog.h"

/*
 *print_dog - prints a struct dog
 *
 *@dog *d: the dog struct
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("%s", d->name);
		else
			printf("NIL");
		if (d->age != NULL)
			printf("%f", d->age);
		else
			printf("NIL");
		if (dog->owner != NULL)
			printf("%s", d->owner);
		else
			printf("NIL");
	}
}
