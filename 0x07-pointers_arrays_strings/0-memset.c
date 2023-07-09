#include "main.h"
/**
 * _memset - function to fill first n byte
 * @s: string to fill
 * @b: character used to fill the string
 * @n: number of byte to fill
 * Return: string that filled the first n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
