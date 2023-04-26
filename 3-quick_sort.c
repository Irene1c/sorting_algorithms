#include "sort.h"

/**
 * quick_sort - implements the quick sort algorithm
 * Lomuto partition Scheme
 * @array: array of values to sort
 * @size: size of array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t a = 0;
	size_t b = size - 1;

	if (size > 1)
	{
		sort(array, size, a, b);
	}
}
/**
 * divide - divides the array
 * @array: the array
 * @size: size of array
 * @first: first element
 * @last: last element
 * Return: the point of partition
 */
int divide(int *array, size_t size, int first, int last)
{
	int pivot, index, i;

	/*last element as pivot */
	pivot = array[last];
	/*a pointer to temporary index */
	index = (first - 1);

	/*loop to compare element*/
	for (i = first; i < last; i++)
	{
		/*compare element to pivot element*/
		if (array[i] <= pivot)
		{
			index++;
			/*swap element at i with larger at index*/
			swap(&array[index], &array[i]);
			if (index != i)
				print_array(array, size);
		}
	}
	swap(&array[index + 1], &array[last]);
	if (index + 1 != i)
		print_array(array, size);
	/*return point of partition*/
	return (index + 1);
}
/**
 * sort - sort the elements
 * @array: the array
 * @size: size of array
 * @first: first element
 * @last: last element
 * Return: nothing
 */
void sort(int *array, size_t size, int first, int last)
{
	int partition;

	if (first < last)
	{
		/*position pivot element */
		partition = divide(array, size, first, last);
		/*repeat steps on right and left of pivot*/
		sort(array, size, first, partition - 1);
		sort(array, size, partition + 1, last);
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
