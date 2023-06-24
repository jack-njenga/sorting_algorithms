#include "main.h"
/*
*/

void print_array(int *arr, size_t size)
{
    size_t i = 0;

    for (i = 0; i != size; i++)
    {
        if (i > 0)
            printf(", ");
        printf("%d", arr[i]);
    }
    printf("\n");
}