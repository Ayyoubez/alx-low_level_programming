#include "dog.h"
#include <stdio.h>
/**
*print_dog - function to print a dog
*@d: pointer argument
*Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!d)
	{
		if (d->name == NULL || d->age == 0 || d->owner == NULL)
			printf("nil\n");
	}
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
