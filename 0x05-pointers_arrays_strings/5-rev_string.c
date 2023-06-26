#include "main.h"
/**
 * rev_string- function to rev string in place
 * @s: string passed as parameter to rev
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int end = 0;
	char tmp;

	while (s[len])
		len++;

	end = len - 1;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
