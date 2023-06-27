#include"main.h"
#include<stdio.h>
/**
 * print_array - Write a function that prints n
 * @a: array
 * @n: number of values to be printed
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%d", a[p]);
		if (p != n - 1)
			printf(",");
	}

printf("\n");
}
