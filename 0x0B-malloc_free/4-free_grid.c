#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * @grid: grid of memories
 * @height: integer
 * Return: void
 */
void free_grid(int **grid, int height)
{
int x = 0;

for (; x < height; x++)
free(grid[x]);
free(grid);
}
