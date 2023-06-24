#include "main.h"
/**
 * 
*/
void swap(int *a, int *b);

void bubble_sort(int *array, size_t size)
{
    size_t i = 0, j = 1;
    int tmp, small = array[0], swapped = 1;

    if (array)
    {
        for (i = 0; i < size - 1; i++)
        {
            printf(" * ");
            for (j = 0; j < size - i - 1; j++)
            {
                printf(" # ");
                if (array[j] > array[j + 1])
                {
                    swap(&array[j], &array[j + 1]);
                    print_array(array, size);
                }
            }
        }
    }
    printf("=======%d===========%d=====\n", array[0], small);
    
    // if (array[0] != small)
    // {
    //     bubble_sort(array, size);
    // }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}