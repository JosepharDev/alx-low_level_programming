#include "main.h"
/**
 * cap_string - function to capitalize first character of each word
 * @s: string to capitalize
 * Return: string that capitalize first character of eac word
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
			|| s[i - 1] == '.' || s[i - 1] == ','
			|| s[i - 1] == ';' || s[i - 1] == '.'
			|| s[i - 1] == '!' || s[i - 1] == '?'
			|| s[i - 1] == '"' || s[i - 1] == ')'
			|| s[i - 1] == '(' || s[i - 1] == '}'
			|| s[i - 1] == '{' || s[i - 1] == '\0')
		{
			s[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (s);
}
