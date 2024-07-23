#include <stdio.h>
/**
 * linear_search - linear search algorithm
 * @array: array of numbers to be search
 * @size: size of array
 * @value: the value to be search in array
 * Return: return index where the value found or -1
*/

int linear_search(int *array, size_t size, int value)
{
	int i;

	i = 0;
	while (array && array[i])
	{
		if (array[i] == value)
		{
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
