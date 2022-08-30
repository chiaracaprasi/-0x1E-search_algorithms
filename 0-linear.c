#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the array (number of elements)
 *
 * Return: nothing
 */
void print_array(int *array, int size)
{
	int i;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}

	printf("\n");
}

/**
 * linear_search - find value in sorted array using linear search method
 * @array: pointer to first element in array to be searched
 * @size: size of the array (number of elements)
 * @value: value to searched for
 *
 * Return: first index where value is located or -1 if not found or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < size; i++)
		if (array[i] == value)
			return(i);
	return(-1);
}
