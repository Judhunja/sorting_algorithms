#include "sort.h"
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
	int pivot, start, temp_1, temp_2, i;

	if (array == NULL)
		return (1);

	pivot = array[upper];
	start = upper;

	for (i = upper; i >= lower; i--)
	{
		if (array[i] > pivot)
		{
			start--;
			temp_1 = array[start];
			array[start] = array[i];
			array[i] = temp_1;
		}
	}
	if (upper != start)
	{
		temp_2 = array[start];
		array[start] = array[upper];
		array[upper] = temp_2;
	}
	print_array(array, size);

	return (start);
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

	if (lower < 0 || lower >= upper || array == NULL)
		return;

	div = lomuto_sort(array, size,  lower, upper);
	quick_sort_imp(array, size, lower, div - 1);
	quick_sort_imp(array, size, div + 1, upper);
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
