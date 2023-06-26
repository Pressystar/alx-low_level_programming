#include"main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: Integer_to_swap
 * @b:Integer_to_swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
