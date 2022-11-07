#include "sort.h"
/**
 * selection_sort - sort an array of integers
 * @array: the array to sort
 * @size: the size of the array
 *
 * Description: This algorithm will work by picking the minimum number
 *	for each iteration and put it in it's appropriate spot
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, tmp;

	if (!array || size <= 1)
		return;
	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				tmp = min;
				min = array[j];
				array[j] = tmp;
			}
		}
		array[i] = min;
		print_array(array, size);
	}
}
