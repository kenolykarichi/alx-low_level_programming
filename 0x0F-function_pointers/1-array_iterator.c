#include "function_pointers.h"
<<<<<<< HEAD
	#include <stdio.h>
	/**
	 * array_iterator - prints each array elem on a newl
	 * @array: array
	 * @size: how many elem to print
	 * @action: pointer to print in regular or hex
	 * Return: void
	 */
	void array_iterator(int *array, size_t size, void (*action)(int))
=======
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
>>>>>>> 0c07bcad988d34ee3bfb37e8e55661d8be7411db
	{
		unsigned int i;


		if (array == NULL || action == NULL)
			return;


		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
