#include "main.h"
/**
 * print_array - function print an array
 * @a: array to print
 * @n: the size of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i + 1 == n)
			printf("%d\n", a[i++]);
		else
			printf("%d, ", a[i++]);
	}
}
