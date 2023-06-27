#include "main.h"
/**
 * _atoi - function to convert string to number
 * @s: string to convert
 * Return: number that converted from string
 */
int _atoi(char *s)
{
	unsigned int number = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			number = number * 10 + (*s - '0');
		else if (number > 0)
			break;
		s++;
	}
	return (number * sign);
}
