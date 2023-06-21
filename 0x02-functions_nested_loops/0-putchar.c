#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - Fucntion  to print string in standard output
 * @str:  First operand
 * Return: void
 */
void _putchar(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
