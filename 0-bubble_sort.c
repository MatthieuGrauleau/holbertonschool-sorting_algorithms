#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order.
 *
 * @array: array of integers.
 * @size: size of the array.
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int temp;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
