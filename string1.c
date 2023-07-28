#include "shell.h"

/**
 * _strcpy - It copies a string
 * @dest: Where the string is copied to
 * @src: Where the string is copied from 
 *
 * Return: The pointer to where the string is copied to 
 **/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
	return (dest);
	while (src[i])
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _strdup - It duplicates a string
 * @str: The string to be duplicated 
 *
 * Return: The pointer to the duplicated string
 **/


char *_strdup(const char *str)
{
int length = 0;
char *ret;

if (str == NULL)
return (NULL);
while (*str++)
length++;
ret = malloc(sizeof(char) * (length + 1));
if (!ret)
return (NULL);
for (length++; length--;)
ret[length] = *--str;
return (ret);
}

/**
 *_puts - It prints an input string
 *@str: The string to be printed
 *
 * Return: Nothing
 **/

void _puts(char *str)
{
int i = 0;

if (!str)
return;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}

/**
 * _putchar - It writes the characters to stdout
 * @c: The character to be printed
 *
 * Return: On success 1, on error -1
 **/

int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
	write(1, buf, i);
	i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
