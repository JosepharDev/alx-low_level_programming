#include "main.h"
/**
 * _strlen - function to count lenght of string
 * @s: string passed as parameter
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
