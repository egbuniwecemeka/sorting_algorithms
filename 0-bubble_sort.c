#include "sort.h"

/**
 * swap_ints - Swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sorts an array in ascending order using Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array to sort
 *
 * Description: Print array after every swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
	}
}
