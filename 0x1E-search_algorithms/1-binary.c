#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of int
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return:  return the index where value is located or -1 if it fails
 **/


int binary_search(int *array, size_t size, int value)
{
	int i = 0, j = size - 1, mid = 0;

	if (!array)
		return (-1);
	while (i <= j)
	{
		printf("Searching in array: ");
		for (mid = i; mid < j; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[j]);
		mid = ((i + j) / 2);
		if (array[mid] < value)
			i = mid + 1;
		else if (array[mid] > value)
			j = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
