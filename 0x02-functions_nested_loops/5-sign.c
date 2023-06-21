#include "main.h"
/**
 * print_sign - fucntion to check sign of n
 *
 * @n: parameter pased to function to check it's sign
 *
 * Return: 1 is n greater than zero  0 if n  zero and -1 if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
