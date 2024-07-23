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
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}