#include "sort.h"
/**
 * bubble_sort - sorts an array of integers using bubble sort algorithm
 *
 * @array: the array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int a;
	int b = 1;

	while (b == 1)
	{
		i = 0;
		b = 0;
		for (i = 0; i < size - 1; i++)
		{
			a = array[i];
			if (array[i + 1] < array[i])
			{
				array[i] = array[i + 1];
				array[i + 1] = a;
				b = 1;
				print_array(array, size);
			}
		}
	}
}
