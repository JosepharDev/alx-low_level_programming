#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm
 * @array: array of numbers to be search
 * @size: size of array
 * @value: the value to be search in array
 * Return: return index where the value found or -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = sqrt(size);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += j;
	}

	j = i - j;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	i = i >= size ? size - 1 : i;
	while (j <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
