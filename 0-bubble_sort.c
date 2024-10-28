#include "sort.h"
void swap(int *xp, int *yp);
/**
 * bubble_sort - function performs a bubble sort
 * @array: a pointer to the array containing the data
 * @size: the size of the array holding the data
 * Return: function has a void return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
			}
			print_array(array, size);
		}
		/* If no two elements were swapped by inner loop, then break */
		if (swapped == false)
			break;
	}
}

/**
 * swap - function swaps adjacent integers
 * @xp: the first int to be swapped
 * @yp: the second int to be swapped
 * Return: function has a void return
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
