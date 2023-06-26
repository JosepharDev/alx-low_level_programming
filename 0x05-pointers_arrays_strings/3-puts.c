#include "main.h"
/**
 * _puts - function print the string in the stdout
 * @str: string passed as parameter to print
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, &(*str), 1);
		str++;
	}
	write(1, "\n", 1);
}
