#include "sort.h"

/**
 * get_max - find max value in array
 * @array: array
 * @size: array size
 *
 * Return: max integer in array
 */
int get_max(int *array, int size)
{
	int max, i;

	for (max = array[0], i = 1; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}

	return (max);
}