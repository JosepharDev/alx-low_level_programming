#include "main.h"
/**
 * _strncpy - function copy n character from  src in dest
 * @dest: destination string
 * @src: source string
 * @n: number of character to be copy
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (!dest)
		return (src);
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[++i] = '\0';
	return (dest);
}
