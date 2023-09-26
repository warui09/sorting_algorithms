#include "sort.h"

/**
 * merge_sort - sort array through merging method
 * @array: array to sort
 * @merge: the command used in sorting through this method
 * @size: size of the array
 * 
 * Return: Nothing
*/
void merge(int *array, size_t left_size, size_t right_size){
    size_t total_size = left_size + right_size;
    int *temp = (int *)malloc(total_size * sizeof(int));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    size_t left_index = 0, right_index = left_size, temp_index = 0;

    while (left_index < left_size && right_index < total_size) {
        if (array[left_index] <= array[right_index]) {
            temp[temp_index++] = array[left_index++];
        } else {
            temp[temp_index++] = array[right_index++];
        }
    }

    while (left_index < left_size) {
        temp[temp_index++] = array[left_index++];
    }

    while (right_index < total_size) {
        temp[temp_index++] = array[right_index++];
    }

    for (size_t i = 0; i < total_size; i++) {
        array[i] = temp[i];
    }

    free(temp);
}
/**
 * merge_sort_recursive - Handling the recursive function
 * @array: the array invloved in this recursion
 * @size: size of the array
 * 
 * Return: Nothing
 * 
*/
void merge_sort_recursive(int *array, size_t size){
    if (size <= 1) {
        return;
    }

    size_t left_size = size / 2;
    size_t right_size = size - left_size;

    merge_sort_recursive(array, left_size);
    merge_sort_recursive(array + left_size, right_size);

    merge(array, left_size, right_size);
}
/**
 * merge_sort - the algorithm sort method
 * @array: array to sort
 * @size: size of the array
 * 
 * Return: Nothing
*/
void merge_sort(int *array, size_t size) {
    if (size <= 1) {
        return;
    }
    merge_sort_recursive(array, size);
}
