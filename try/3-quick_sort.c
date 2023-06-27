#include "main.h"

void swap(int *num1, int *num2)
{
	int tmp = *num1;

	*num1 = *num2;
	*num2 = tmp;
}

/**
 * partition - partition by lomuto scheme
 * @arr: array
 * @low: low end of a subarray
 * @high: high end of a subarray
 * @size: number of elements in array
 * Return: int
 */
int partition(int arr[], int low, int high, size_t size)
{
	int pivot  = arr[high]; /* pivot */
	int j;
	int i = (low - 1);

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
 * quickSort -  quickSort internal implementation
 * @arr: array
 * @low: low bound for first subarray
 * @high: high index or pivot
 * @size: number of elements(optional for printing fx)
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
 * quick_sort - quick sort interface
 *
 * @array: array to size
 * @size: number of element in array
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}