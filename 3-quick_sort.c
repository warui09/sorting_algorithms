#include "sort.h"
#include <stdio.h>

/**
 * partition - create a partition around the pivot, in this case
 * the last element
 * @array: array to partition
 * @low: lower index of the array
 * @high: higher index of the array
 *
 * Return: index at which the pivot should be
 */

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);
	int j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, high + 1);
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, high + 1);

	return (i + 1);
}

/**
 * quick_sort_recursive - recursively sort a partition of an array
 * @array: array to sort
 * @low: lower index of the array
 * @high: higher index of the array
 *
 * Return: Nothing
 */

void quick_sort_recursive(int *array, int low, int high)
{
	if (low < high)
	{
		int pi = partition(array, low, high);

		quick_sort_recursive(array, low, pi - 1);
		quick_sort_recursive(array, pi + 1, high);
	}
}

/**
 * quick_sort - sort an array using the Quick Sort algorithm
 * @array: array to sort
 * @size: size of the array
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1);
}
