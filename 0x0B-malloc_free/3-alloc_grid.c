#include "main.h"
/**
 * alloc_grid- allocate memory to each elements of an array
 * @width: the matrix column
 * @height: the matrix row
 *
 * Return: a pointer a an array
 */

int **alloc_grid(int width, int height)
{
	int i, j = 0;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(width * sizeof(int));
	if (array == NULL)
		return (NULL);

	while (j < width)
	{
		for (i = 0; i < width; i++)
		{
			array[i] = malloc(height * sizeof(int));
			if (array[i] == NULL)
				return (NULL);
			array[j][i] = 0;
		}
		j++;
	}
	return (array);
}
