#include "main.h"
/**
 * _strcpy - function cpy string to another buffer
 * @dest: buffer to store the string
 * @src: string to get copyed
 * Return: char pointer to the buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
