#include "main.h"
/**
 * _memcpy - function to copy src into dest
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
