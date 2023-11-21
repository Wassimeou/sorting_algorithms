#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, index;
	int tmp, swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		index = i;

		for (size_t j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			index = j;
		}

		if (index != i)
		{
			swap = array[i];
			array[i] = array[index];
			array[index] = swap;
			print_array(array, size);
		}
	}
}
