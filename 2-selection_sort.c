#include "sort.h"
void swap(int *xp, int *yp);
/**
 * swap - function that swapto number.
 * @xp: first nmber.
 * @yp: second number.
 */

void swap(int *xp, int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
/**
 * selection_sort - function that sorts an array  using the Selection sort.
 * @array: table of array.
 * @size: size of array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[k])
			{
				k = j;
			}
		if (k != i)
		{
			swap(&array[k], &array[i]);
			print_array(array, size);
		}
	}
}
