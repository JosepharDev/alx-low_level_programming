#include "main.h"
/**
 * string_toupper - function change lowercase character to uppercase
 * @s: string to change to uppercase
 * Return: string that all character in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (s);
}
