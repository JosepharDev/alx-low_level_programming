#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - Fucntion  to print string in standard output
 * @str:  First operand
 * Return: void
 */
void _putchar(char *str)
{
	while (*str != '\0')
	{
		write(1, *str, 1);
		str++;
	}
	write(1, "\n", 1);
}
