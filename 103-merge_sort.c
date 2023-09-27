#include "sort.h" 

/**
 * merge_subarr - Merge two subarrays into a sorted subarray.
 * @subarr: The original array.
 * @buff: Temporary buffer to store the sorted subarray.
 * @front: The starting index of the first subarray.
 * @mid: The ending index of the first subarray.
 * @back: The ending index of the second subarray.
 */
void merge_subarr(int *subarr, int *buff, size_t front, size_t mid, size_t back)
{
    size_t a, b, c = 0;

    printf("Merging...\n[left]: ");
    print_array(subarr + front, mid - front);

    printf("[right]: ");
    print_array(subarr + mid, back - mid);

    for (a = front, b = mid; a < mid && b < back; c++)
        buff[c] = (subarr[a] < subarr[b]) ? subarr[a++] : subarr[b++];
    for (; a < mid; a++)
        buff[c++] = subarr[a];
    for (; b < back; b++)
        buff[c++] = subarr[b];
    for (a = front, c = 0; a < back; a++)
        subarr[a] = buff[c++];

    printf("[Done]: ");
    print_array(subarr + front, back - front);
}

/**
 * merge_sort_recursive - Recursively sort the array using merge sort.
 * @array: The array to be sorted.
 * @buff: Temporary buffer for merging.
 * @front: The starting index of the subarray to be sorted.
 * @back: The ending index of the subarray to be sorted.
 */
void merge_sort_recursive(int *array, int *buff, size_t front, size_t back)
{
    size_t mid;
    if (back - front > 1)
    {
        mid = front + (back - front) / 2;
        merge_sort_recursive(array, buff, front, mid);
        merge_sort_recursive(array, buff, mid, back);
        merge_subarr(array, buff, front, mid, back);
    }
}

/**
 * merge_sort - Sorts an array of integers using merge sort.
 * @array: The array to be sorted.
 * @size: The number of elements in the array.
 */
void merge_sort(int *array, size_t size)
{
    int *buff;

    if (array == NULL || size < 2)
        return;

    buff = malloc(sizeof(int) * size);
    if (buff == NULL)
        return;

    merge_sort_recursive(array, buff, 0, size);

    free(buff);
}
