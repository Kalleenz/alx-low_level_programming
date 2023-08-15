#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - This is used to find the length of the string
 * @x: the string
 * Return: length of string
 */
int _strlen(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * _strcopy - copy string from source to destination
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcopy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - creating a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, j;

	i = _strlen(name);
	j = _strlen(owner);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->name = malloc(sizeof(char) * i + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * j + 1);
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}

	_strcopy(ptr->name, name);
	_strcopy(ptr->owner, owner);

	ptr->age = age;
	return (ptr);
}
