#include "main.h"
/**
 * reverse_array - function reverse an array
 * @n: number of element in the array
 * @a: array to reverse passed as parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int tmp;
	int end = n - start - 1;

	while (start <	n / 2)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
