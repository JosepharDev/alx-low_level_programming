#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - binary_search algorithm
 * @array: array of numbers to be search
 * @size: size of array
 * @value: the value to be search in array
 * Return: return index where the value found or -1
*/


int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int mid;

	while (array && l <= r)
	{
		size_t i = 0;

		printf("Searching in array: ");
		while (i < size - 1)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);
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
