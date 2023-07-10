#include"main.h"
#include<stdlib.h>
#include<stdio.h>


/**
 * main - Entry point
 * @argc: numbers of arguments
 * @argv: arrays of arguments
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
int x, y;
if (argc == 1)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x *y);
return (0);
}
printf("Error\n");
return (1);
}
