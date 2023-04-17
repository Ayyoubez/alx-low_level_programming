#include "dog.h"

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
	d->name  = name;
	d->age = age;
	d->owner = owner;
}
