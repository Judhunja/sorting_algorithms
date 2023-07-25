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
 * selection_sort - sorts an array of ints using selection sort
 * algorithm
 * @array: pointer to array of ints
 * @size: number of elements in the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t j_min;

	for (i = 0; i < size; i++)
	{
		j_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[j_min])
				j_min = j;
		}
		if (j_min != i)
		{
			swap(&array[j_min], &array[i]);
			print_array(array, size);
		}
	}
}
