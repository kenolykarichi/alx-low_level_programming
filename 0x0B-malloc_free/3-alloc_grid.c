#include <stdlib.h>

/**
 * **alloc_grid - creates  a two dimensional array of int
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < heigth; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array == NULL)
		{
			free(array);
			for (j = 0; j <= j; j++)
				free(array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
