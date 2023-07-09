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
	while (n--)
		*(s + n) = b;
	return (s);
}
