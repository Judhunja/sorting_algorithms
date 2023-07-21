#include "sort.h"
/**
 * bubble_sort - sorts array of ints using bubble sort algorithm
 * @array: array of ints
 * @size: number of elements in the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	temp = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				for (k = 0; k < size - 1; k++)
					printf("%d, ", array[k]);
				if (k == size - 1)
					printf("%d\n", array[k]);
			}
		}
	}
}
