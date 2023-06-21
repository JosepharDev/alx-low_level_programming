#include "main.h"
/**
 * print_last_digit - function return last digit of number
 *
 *@a: number passed as parameter
 *
 * Return: last digit of number a
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		_putchar((a % 10) * -1 + 48);
		return ((a % 10) * -1);
	}
	_putchar((a % 10) + 48);
	return (a % 10);
}
