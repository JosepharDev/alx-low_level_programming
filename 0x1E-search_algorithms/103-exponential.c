#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - exponential search algorithm
 * @array: array of numbers to be search
 * @size: size of array
 * @value: the value to be search in array
 * Return: return index where the value found or -1
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, newsize = 0;
	int ret;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	newsize = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	ret = binary_search(array + i, newsize, value);
	return (ret == -1 ? ret : ret + (int)i);
}

/**
 * binary_search - binary_search algorithm
 * @array: array of numbers to be search
 * @size: size of array
 * @value: the value to be search in array
 * Return: return index where the value found or -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size;
	size_t mid = 0;

	while (array && l <= r)
	{
		printf("Searching in array: ");
		while (mid < (size - 1))
		{
			printf("%d, ", array[mid]);
			mid++;
		}
		printf("%d\n", array[mid]);
		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (array[mid]);
	}
	return (-1);
}
