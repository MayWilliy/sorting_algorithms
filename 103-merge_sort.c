#include "sort.h"

void merge_sort(int *array, size_t size);
void merge_subarr(int *subarr, int *buff, size_t first, size_t cent,size_t last);
void merge_sort_recursive(int *subarr, int *buff, size_t first, size_t last);

/**
 * merge_subarr - This sorts a subarry of integers
 * @suberr: Subarrray of an int
 * @buff: the store the size of the int
 * @first: the first index of subarray
 * @cent: the centre index of subarray
 * @last: the last index of subarray
 */
void merge_subarr(int *subarr, int *buff, size_t first, size_t cent,
		size_t last)
{

	size_t i, j, k = 0;

	printf("Merging...\n[left]: ");
	print_array(subarr + first, cent - first);

	printf("[right]: ");
	print_array(subarr + cent, last - cent);

	for (i = first, j = cent; i < cent && j < last; k++)
		buff[k] = (subarr[i] < subarr[j]) ? subarr[i++] : subarr[j++];
	for (; i < cent; i++)
		buff[k++] = subarr[i];
	for (; j < last; j++)
		buff[k++] = subarr[j];
	for (i = first, k = 0; i < last; i++)
		subarr[i] = buff[k++];

	printf("[Done]: ");
	print_array(subarr + first, last - first);
}

/**
 * merge_sort_recursive - This implements the merge sort algorithm through recursion.
 * @subarr: Subarray of an array of integers to sort.
 * @buff: Buffer to store the sorted result.
 * @first: First index of the subarray.
 * @last: last index of the subarray.
 */
void merge_sort_recursive(int *subarr, int *buff, size_t first, size_t last)
{
	size_t cent;

	if (last - first > 1)
	{
		cent = first + (last - first) / 2;
		merge_sort_recursive(subarr, buff, first, cent);
		merge_sort_recursive(subarr, buff, cent, last);
		merge_subarr(subarr, buff, first, cent, last);
	}
}

/**
 * merge_sort - This Sorts an array of integers in ascending
 *              order using the merge sort algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 *
 * Description: This implements the top-down merge sort algorithm.
 */

void merge_sort(int *array, size_t size)
{
	int *buff;

	if (array == NULL || size < 2)
		return;

	buff = malloc(sizeof(int) * size);
	if (buff == NULL)
		return;

	merge_sort_recursive(array, buff, 0, size - 1);

	free(buff);
}
