#ifndef SORT_H
#define SORT_H

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


/* prototypes */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_ints(int *a, int *b);
void bubble_sort(int *array, size_t size);

#endif /* SORT_H */
