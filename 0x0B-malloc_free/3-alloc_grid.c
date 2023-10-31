#include "main.h"
#include <stdlib.h>
/**
 *  * alloc_grid - nested loop to make grid
 *   * @width: width input
 *    * @height: height input
 *     * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **ss;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ss = malloc(sizeof(int *) * height);

	if (ss == NULL)
	return (NULL);

	for (x = 0; x < height; x++)
	{
		ss[x] = malloc(sizeof(int) * width);
	if (ss[x] == NULL)
	{
		for (; x >= 0; x--)
			free(ss[x]);
		free(ss);
																return (NULL);															}
	}

	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
		ss[x][y] = 0;
	}

	return (ss);
}

