#include "shell.h"

/**
 **_strncpy - it copies a string
 *@dest: the destination string to be copied to
 *@src: source string
 *@n: the amount of characters

 *Return: the joined string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
{
	dest[i] = src[i];
	i++;
}
	if (i < n)
{
	j = i;
	while (j < n)
{
	dest[j] = '\0';
	j++;
}
}
	return (s);
}

/**
 **_strncat - it concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: the amount of bytes

 *Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	i++;
	while (src[j] != '\0' && j < n)
{
	dest[i] = src[j];
	i++;
	j++;
}
	if (j < n)
	dest[i] = '\0';
	return (s);
}
/**
 **_strchr - it locates characters in a string
 *@s: the string
 *@c: the character
 *
 *Return: 0
 */

char *_strchr(char *s, char c)
{
	do {
	if (*s == c)
	return (s);
} while (*s++ != '\0');

return (NULL);
}
