#include "main.h"
/**
 * _strncat - function concatinate n byte in two strings
 * @dest: first string
 * @src: second string
 * @n: number of byte concatinate from src to dest
 * Return: @dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j])
		j++;
	while (src[i] && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
