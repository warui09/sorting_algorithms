#ifndef SORT_H
#define SORT_H

<<<<<<< HEAD
/* header files */
#include <stddef.h>
=======
#define INCREMENT 1
#define DECREMENT -1

/**
 * enum bool - Enum Boolean values.
 * @false: 0.
 * @true: 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;
>>>>>>> f84fc94e0a8c37df2b30219569e5f76f3b136303

/* doubly linked list struct */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

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



/* prototypes */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
<<<<<<< HEAD
void selection_sort(int *array, size_t size);
=======
void swap_ints(int *a, int *b);
void insertion_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t *node);
void counting_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
int getCantRep(int num);
listint_t *get_dlistint_lelem(listint_t *h);
>>>>>>> f84fc94e0a8c37df2b30219569e5f76f3b136303

#endif /* SORT_H */
