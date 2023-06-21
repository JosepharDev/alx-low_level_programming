#include "main.h"
/**
 * print_alpha - function to print aphabet in lowecase
 *
 * return: void
 */
void print_alpha(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		print_alphabet_x10();
		i++;
	}
}
