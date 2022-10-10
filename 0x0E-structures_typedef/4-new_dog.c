#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
* new_dog - a function that creates a new dog.
* @name: a name
* @age: an age
* @owner: the dog owner
* Return: zero
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;
	int nam = 0, own = 0;

	if (name != NULL && owner != NULL)
	{
		nam =  _strlen(name) + 1;
		own = _strlen(owner) + 1;
		dogg = malloc(sizeof(dog_t));

		if (dogg == NULL)
			return (NULL);
		dogg->name = malloc(sizeof(char) * nam);

		if (dogg->owner == NULL)
		{
			free(dogg);
			return (NULL);
		}
		dogg->owner = malloc(sizeof(char) * own);

		if (dogg->owner == NULL)
		{
			free(dogg->name);
			free(dogg);
			return (NULL);
		}

		dogg->name = _strcpy(dogg->name, name);
		dogg->owner = _strcpy(dogg->owner, owner);
		dogg->age = age;
	}
	return (dogg);

}
/**
* _strlen - length
* @s: a string
* @Return: len
*/
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++
	}
	return (c);
}
/**
* _strcpy - Copy a string
* @dest: destination
* @src: source
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';

	return (dest);
}

