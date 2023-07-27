#include "general.h"
#include "text.h"

/**
 * digits - Cut out the number of digits of a number
 * @n: Number
 *
 * Return: The digits
 **/

int digits(int n)
{
	int i;

	for (i = 0; n != 0; i++, n /= 10)
		;
	return (i);
}

/**
 * to_string - Converts @number to string
 * @number: Number to be converted
 *
 * Return: Number as string
 **/

char *to_string(int number)
{
	int n_digits, i;
	char *_number;

	n_digits = digits(number);
	_number = malloc(n_digits * sizeof(char) + 2);
	if (number == 0)
	{
		_number[0] = '0';
		_number[1] = '\0';
		return (_number);
	}
	_number[n_digits] = '\0';
	for (i = n_digits - 1; number != 0; number /= 10, i--)
		_number[i] = (number % 10) + '0';
	return (_number);
}


/**
 * is_numerical - Checks if it is a digit
 * @n: Number
 *
 * Return: If it is a number, return 1 else return 0
 **/

int is_numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoi - Converts a string to a number
 * @s: String to be converted
 *
 * Return: Return the number
 **/

int _atoi(char *s)
{
	unsigned int number, i;
	int sign;

	sign = 1;
	number = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]))
		{
			number = (s[i] - 48)	+ number * 10;
			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}

	}
	return (number * sign);
}

/**
 * contains_letter - Searches for the non-digits in a string
 * @s: String to be searched
 *
 * Return: If a non-digits was found, return _TRUE
 * if not, return _FALSE
 **/

int contains_letter(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_numerical(s[i]) == _FALSE)
			return (_TRUE);
	}
	return (_FALSE);
}
