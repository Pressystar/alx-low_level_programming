#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - Write a function that returns the sum
 * @n: The number of parameters passed
 * @...: Avarable number of parameters
 * Return: if n == 0 - 0
 * else - the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int f, sum = 0;

va_start(ap, n);

for (f = 0; f < n; f++)
sum += va_arg(ap, int);

va_end(ap);

return (sum);
}
