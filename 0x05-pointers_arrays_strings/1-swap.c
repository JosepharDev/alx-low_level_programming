#include "main.h"
/**
 * swap_int - function swap to value of two variable passed to func
 * @a: first number
 * @b: second number
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
