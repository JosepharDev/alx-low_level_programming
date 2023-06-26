#include "main.h"
/**
 * print_rev - function to print string in reverse order
 * @s: string to print in rev
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (s[--i])
	{
		write(1, &s[i], 1);
	}
	write(1, "\n", 1);
}
