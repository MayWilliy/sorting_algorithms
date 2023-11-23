#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Fucntion the print the array of an int
 *
 * @array:The array of an integer
 * @size: the size of the array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
