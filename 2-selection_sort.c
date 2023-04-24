#include "sort.h"

/**
 * selection_sort - implements the selection sort algorithm
 * @array: array of values to sort
 * @size: size of array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, var_min;

	if (size > 1)
	{
		/*loop to access array values */
		for (a = 0; a < size - 1; a++)
		{
			var_min = a;
			/* loop to find minimum value */
			for (b = a + 1; b < size; b++)
			{
				if (array[b] < array[var_min])
					var_min = b;
			}
			if (var_min != a)
			{
				/* swap the min value found */
				swap(&array[var_min], &array[a]);
				/*print array after each swap of two elements */
				print_array(array, size);
			}
		}
	}
}


/**
 * swap - Swaps two values
 * @b: First value
 * @c: Second value
 *
 * Return: nothing
 */
void swap(int *b, int *c)
{
	int temp = *b;
	*b = *c;
	*c = temp;
}
