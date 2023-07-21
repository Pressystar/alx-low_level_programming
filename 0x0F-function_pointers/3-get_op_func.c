#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - write a program thst select the correct function to perform
 * @s: operator passedas argument
 * Return: pointer to the function correspnding
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
