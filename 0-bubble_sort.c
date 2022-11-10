#include "sort.h"

/**
 * bubble_sort - Sort an array of integer in ascending order
 * 
 * @param array : Pointer to array to be sorted
 * @param size : size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t step, i;

    if (array == NULL || size < 2)
    return;

    /* loop to access each array element */
    for ( step = 0; step < size - 1; ++step)
    {
        /* check if swapping occurs */
        

        /* loop to compare array elements */
        for ( i = 0; i < size - step - 1; ++i)
        {
            /** compare two array elements*/
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                print_array(array, size);

               
            }
        }
        size--;
    }
}
