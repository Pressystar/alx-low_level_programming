#include <stdio.h>
#include"main.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array og arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int p;

for (p = 0; p < argc; p++)
{
printf("%s\n", argv[p]);
}
return (0);
}
