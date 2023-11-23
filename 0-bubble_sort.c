#include "sort.h"

/**
 * swap_ints - Function that swaps two integers in an array
 * @a: The first integer to swap
 * @b: The second integer to swap
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a,
	*a = *b;
	*b = tmp;

}

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: the array of the integer
 * @size: the size of the array
 *
 * Description: This array prints the array after each keys
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool booly = false;

	if (array == NULL || size < 2)
		return;

	while (booly == false)
	{
		booly = true;
		for (i = 0; i < len -1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				booly = false;
			}
		}
		len--;
	}
}

