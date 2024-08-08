#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using the
 * Selection sort algorithm
 *
 * @array: Array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, min_index;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_index])
				min_index = j;

		if (min_index != i)
		{
			tmp = array[min_index];
			array[min_index] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
