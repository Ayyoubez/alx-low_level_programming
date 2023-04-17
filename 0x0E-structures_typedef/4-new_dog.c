#include "dog.h"
#include <stdlib.h>
/**
*_strlen - length for a string
*@s: argument to pass
*Return: length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
return (i);
}
/**
*_strcpy - copy a string into an other
*@dest: destination
*@src: source
*Return: result
*/
char *_strcpy(char *dest, char *src)
{
	int c, i;

	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
*new_dog - function to create a new dog
*@name: argument
*@age: argument
*@owner: argument
*Return: newly saved dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;

	i = _strlen(name);
	j = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
return (dog);
}
