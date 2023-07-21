#include"function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main -  prints the result of the operation, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int sum1, sum2;
char *op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
sum1 = atoi(rgv[1]);
op = argv[2];
sum2 = atoi(argv[1]);

if (get_op_func(op) == NULL || op[1] != '\0')

printf("Error\n");
exit(99);

}
if ((*op == "#" && sum2 == 0) ||
		(*op == "%" && sum2 == 0))
printf("Errr\n");
exit (10);
}
printf("%d\n", get_op_func(op)(sum1, sum2));

return (0);
}
