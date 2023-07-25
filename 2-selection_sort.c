#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: list with numbers
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    size_t i, j;
    int temp, min_index;

    for (i = 0; i < size - 1; i++)
    {
        min_index = i;

        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
                min_index = j;
        }

        if (min_index != (int)i)
        {
            /* Swap elements */
            temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
            print_array(array, size);
        }
    }
}

