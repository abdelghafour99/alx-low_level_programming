#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Initialize a dog structure
 *
 *@name: the name to attribut
 *@age: the age to attribut
 *@owner: the owner to attribut
 *
 *Return: always d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
