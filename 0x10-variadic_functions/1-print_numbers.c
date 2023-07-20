#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Write a function that prints numbers
 * @separator: the string to be printed
 * @n: The number of int
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{       
va_list sums;
unsigned int index;

va_start(sums, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(sums, int));
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");

va_end(sums);
}
