#include "sort.h"

/**
 * swap_ints - This function swaps two integers in an aarray
 * @a: the first int
 * @b: the second int
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array
 *
 * Description: This prints array after each swap
 */
void selection_sort(int *array, size_t size)
{
	int *toys;
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size -1; i++)
	{
		toys = array + i;
		for (j = i + 1; j < size; j++)
			toys = (array[j] < *toys) ? (array +j) : toys;
		if ((array + i) != toys)
		{
			swap_int(array + i, toys);
			print_array(array, size);
		}
	}
}


