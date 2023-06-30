#include "main.h"
/**
 * _strcat - function to concatinate two strings
 * @dest: first string
 * @src: second string
 * Return: @dest string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
