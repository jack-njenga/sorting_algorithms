#include "main.h"
/**
 * 
*/

int main(void)
{
    int arr[] = {12, 3, 6, 1, 15, 29, 3};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);
    printf("\n");
    bubble_sort(arr, n);

    return 0;
}