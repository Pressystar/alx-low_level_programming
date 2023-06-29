#include"main.h"
/**
 * reverse_array - reverses  an array of integers
 * @a: array
 * @n: number of element of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int m;
	int p;

	for (m = 0; m < n; m++)
	{
		n--;
		p = a[m];
		a[m] = a[n];
		a[n] = p;
	}
}
