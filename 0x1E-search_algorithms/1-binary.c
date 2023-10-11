#include "search_algos.h"

/**
 * recursive_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t n = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");
	if (n && size % 2 == 0)
		n--;

	if (value == array[n])
		return ((int)n);

	if (value < array[n])
		return (recursive_search(array, n, value));

	n++;

	return (recursive_search(array + n, size - n, value) + n);
}

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = recursive_search(array, size, value);
	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
