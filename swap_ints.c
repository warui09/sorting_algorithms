#include "sort.h"

/**
 * swap_ints - swap two numbers in an array.
 * @a: first num
 * @b: second num
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}