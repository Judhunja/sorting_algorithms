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
 * knuth_sequence - generates knuth sequence of array of ints
 * @size: size of the array
 * @seq: sequence of gaps to skip while sorting
 * Return: nothing
 */
void knuth_sequence(size_t size, int seq[])
{
	int n = 1;
	int index = 0;

	while(h <= size)
	{
		seq[index] = n;
		n = n * 3 + 1;
		index++;
	}
	index--;
	seq[index] = 0;
}

/**
 * shell_sort - sorts array of ints using shell
 * sort algorithm
 * @array: array of ints
 * @size: number of ints int array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	int i;
	int seq[size];
	knuth_sequence(size, seq);

	int index = 0;

	for (; seq[index] > 0; index++)
	{
		int gap = seq[index];

		for (i = gap; i < size; i++)
		{

		}
	}
}
