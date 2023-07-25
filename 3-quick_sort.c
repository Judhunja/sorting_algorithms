#include "sort.h"
/**
 * swap - swaps two ints
 * @x: first int
 * @y: second int
 * Return: nothing
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * lomuto_sort - implements the divide and conquer technique
 * of quick sort algorithm
 * @array: array of ints
 * @size: number of elements in the array
 * @lower: lower bound of the array
 * @upper: upper bound of the array
 * Return: index at which to divide the array
 */
int lomuto_sort(int *array, size_t size, int lower, int upper)
{
	int pivot, i, j;

	if (array == NULL || size == 0)
		return (1);

	pivot = array[upper];
	i = lower - 1;

	for (j = lower; j < upper; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[j], &array[i]);
		}
	}
	swap(&array[i + 1], &array[upper]);
	print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort_imp - helper of the quick sort function
 * @array: array of ints
 * @lower: lower bound of array
 * @upper: upper bound of array
 * @size: number of elements in the array
 */

void quick_sort_imp(int *array, size_t size, int lower, int upper)
{
	int div;

	if (lower < upper)
	{
		div = lomuto_sort(array, size, lower, upper);
		quick_sort_imp(array, size, lower, div - 1);
		quick_sort_imp(array, size, div + 1, upper);
	}
}

/**
 * quick_sort - sorts array of ints using quick sort algorithm
 * @array: array of ints
 * @size: number of elements in the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_imp(array, size, 0, size - 1);
}
