#include "main.h"
/**
 * _strchr - function occurrence of the first character in s
 * @s: string to search on it
 * @c: character to search for it
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s && s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (!c)
		return (s + i);
	return (NULL);
}
