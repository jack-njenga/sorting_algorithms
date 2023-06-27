#include "main.h"
/**
 * swap - swapping function
 * @num1: first int
 * @num2: second int
*/
void swap(int *num1, int *num2)
{
	int tmp = *num1;

	*num1 = *num2;
	*num2 = tmp;
}

/**
 * partition - partition function
 * @arr: array
 * @low: starting index
 * @high: Ending index
 * @size: number of elements of the array
 * 
 * Return: element after partitioning
 */
int partition(int arr[], int low, int high, size_t size)
{
	int pivot;
	int j;
	int i;

    pivot  = arr[high];
    i = (low - 1);

	for (j  = low; j  <= high - 1 ; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
            {
                swap(&arr[i], &arr[j]);
			    print_array(arr, size);
            }
		}
	}

	i++;
	if (i != high)
	{
		swap(&arr[i], &arr[high]);
		print_array(arr, size);
	}
	return (i);
}

/**
 * quickSort -  quick_Sort helper function
 * @arr: array
 * @low: starting index
 * @high: ending index
 * @size: number of elements
 */

void quickSort(int arr[], int low, int high, int size)
{
	if (low < high)
	{
		int pi = partition(arr, low, high, size);

		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 *
 * @array: array to size
 * @size: number of element in array
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}