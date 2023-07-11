#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * **alloc_grid -  function that returns a pointer to a 2 dimension
 * @width: int
 * @height: int
 * Return: NULL if negative
 */
int **alloc_grid(int width, int height)
{
int **tab, x, y;
tab = malloc(sizeof(*tab) * height);

if (width <= 0 || height <= 0 || tab == 0)
{
return (NULL);
}
else
{
for (x = 0; x < height; x++)
{
tab[x] = malloc(sizeof(**tab) * width);
if (tab[x] == 0)
{
/*Free everything if malloc fails*/
while (x--)
free(tab[x]);
free(tab);
return (NULL);
}
for (y = 0; y < width; y++)
tab[x][y] = 0;
}
}
	return (tab);
}

