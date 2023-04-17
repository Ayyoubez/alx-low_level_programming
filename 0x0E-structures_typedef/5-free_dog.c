#include <stdlib.h>
#include "dog.h"
/**
*free_dog - function to free the memory
*@d: argument to pass
*Return: free dog
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
