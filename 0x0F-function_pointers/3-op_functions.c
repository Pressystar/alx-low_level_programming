#include"3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add -  function that selects the correct function to perform
 * @a: first number
 * @b: second number
 * Return: sum f a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Returns difference of two numbers
 * @a: first number
 * @b: secnd number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - returns product the two numbers
 * @a: first number
 * @b: second number:
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - fuctions that returns division
 * @a: first number
 * @b: second number
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - returns the remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder
 */
int op_mod(int a, int b)
{
return (a % b);
}
