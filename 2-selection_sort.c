#include "sort.h"
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
	int temp;

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
			temp = array[j_min];
			array[j_min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
