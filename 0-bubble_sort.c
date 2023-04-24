#include "sort.h"

/**
 * bubble_sort - implements the bubble sort algorithm
 * @array: array of values to sort
 * @size: size of array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int flag = 0;

	if (size > 1)
	{
		/*loop to access array values */
		for (a = 0; a < size - 1; a++)
		{
			flag = 0;
			/* loop to compare array values */
			for (b = 0; b < size - a - 1; b++)
			{
				/* comparing two adjacent elements */
				if (array[b] > array[b + 1])
				{
					/* swap the greater value found */
					swap(&array[b], &array[b + 1]);
					flag = 1;
					/*print array after each swap of two elements */
					print_array(array, size);
				}
			}
			if (flag == 0)
				break;
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
