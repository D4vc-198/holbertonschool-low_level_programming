#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * lenght - get lenght of string
 * @str: string
 * Return: lenght of string
 */
int lenght(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}

/**
 * strcpy - copues the string pointed to src
 * @dest: dest of string
 * @src: source string
 * Return: copy string
 */
char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= lenght(src); i++)
		dest[i] = src[i];
	return (dest);

}

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *c_of_name;
	char *c_of_owner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	dog1->age = age;

	if (name != NULL)
	{
		c_of_name = malloc(len(name) + 1);
		if (c_of_name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = strcpy(c_of_name, name);
	}
	else
		dog1->name = NULL;

	if (owner != NULL)
	{
		c_of_owner = malloc(len(owner) + 1);
		if (c_of_owner == NULL)
		{
			free(c_of_name);
			free(dog1);
			return (NULL);
		}
		dog1->owner = strcpy(c_of_owner, owner);
	}
	else
		dog1->owner = NULL;
	return (dog1);
}
