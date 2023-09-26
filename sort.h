#ifndef SORT_H
#define SORT_H

/* header files */
#include <stddef.h>
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


/* prototypes */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void selection_sort(int *array, size_t size);
void swap_ints(int *a, int *b);
void insertion_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
int get_max(int *array, int size);
void swap_nodes(listint_t **list, listint_t *node);
void merge_sort(int *array, size_t size);
void merge(int *array, size_t left_size, size_t right_size);
void merge_sort_recursive(int *array, size_t size);
void merge_subarr(int *subarr, int *buff, size_t front, size_t mid, size_t back);
void counting_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
int getCantRep(int num);
listint_t *get_dlistint_lelem(listint_t *h);
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
