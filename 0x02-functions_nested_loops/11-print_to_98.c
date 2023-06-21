#include "main.h"
/**
 * print_to_98 - function print numbers from n to 98
 * @n: number to start passed as parameter
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		while (n <= 0)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n >= 0)
	{
		while (n <= 97)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				return;
			}
			printf("%d, ", n);
			n++;
		}
	}

	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
				return;
			}
			printf("%d, ", n);
			n--;
		}
	}
}
