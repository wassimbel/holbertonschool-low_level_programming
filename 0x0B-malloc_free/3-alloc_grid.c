#include <stdlib.h>
#include "holberton.h"
/**
*alloc_grid - return a pointer to 2d array of integers
*@width:width
*@height:height
*Return:return 0
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **g;

if (width <= 0 || height <= 0)
return (NULL);

g = malloc(height * sizeof(*g));
if (g == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
g[i] = malloc(width * sizeof(*g));

if (g[i] == NULL)
{
free(g);
return (NULL);
}

for (j = 0; j < width; j++)

g[i][j] = 0;
}

return (g);
}
