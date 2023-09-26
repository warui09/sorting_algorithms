#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sort a doubly linked list using selection sort
 * @array: pointer to the head of the array
 * @size: size of the array
 *
 * Return: Nothing
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}

		if (min_idx != i)
		{
			/* Swap array[i] and array[min_idx] */
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}
