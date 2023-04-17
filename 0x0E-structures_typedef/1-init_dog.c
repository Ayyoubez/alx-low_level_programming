#include "dog.h"
#include <stdlib.h>

/**
*init_dog - function to initiliase a nev variable type dog
*@d: pointer parametere
*@name: argument
*@age: argument
*@owner: argumen
*Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name  = name;
	d->age = age;
	d->owner = owner;
}
