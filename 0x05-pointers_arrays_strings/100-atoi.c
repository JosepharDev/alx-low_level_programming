#include "main.h"
/**
 * _atoi - function to convert string to number
 * @s: string to convert
 * Return: number that converted from string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int nbr = 0;

	while (s[i] && (s[i] == ' ' || s[i] == '\t'))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
			i++;
		}
		else
			i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + s[i] - '0';
		i++;
	}
	return (sign * nbr);
}
