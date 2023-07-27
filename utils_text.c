#include "text.h"

/**
 * _strlen - Returns the length of a string
 * @msg: String to calculate length
 *
 * Return: Length of the string
 **/

int _strlen(char *msg)
{
	int i;

	for (i = 0; msg[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcat - Concatenates two strings
 * @dest: String concatenate
 * @src: Source string
 *
 * Return: A string concatenate
 **/

char *_strcat(char *dest, char *src)
{
	int l_dest, i;

	l_dest = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++, l_dest++)
		dest[l_dest] = src[i];
	dest[l_dest] = '\0';
	return (dest);
}

/**
 * _strcpy - Copies a string to another
 * @dest: Where to copy the string to
 * @src: Where the string is copied from
 *
 * Return: Returns the value of dest
 **/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}


/**
 * _strdup - The pointer to a newly allocated space in memory
 * @str: String to be copied
 *
 * Return: The string copied
 **/

char *_strdup(char *str)
{
	int size, i;
	char *dest;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;
	dest = malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(dest + i) = *(str + i);

	/* (dest + i) = 0; */
	return (dest);
}

/**
 * _strcmp - Compares two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: Integer
 **/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
