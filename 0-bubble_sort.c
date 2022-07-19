#include <stdio.h>
/**
 * bubble_sort - sorting algorithms
 * @array: unsorted array
 * @size: the size of @array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
}
