#include <stdio.h>
/**
 * main -6-size.c
 * description -Write a C program that prints
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a char: %lu byte(s)\n", sizeof(char));
printf("size of an int: %lu byte(s)\n", sizeof(int));
printf("size of long int: %lu bytes(s)\n,sizeof(long int));
printf("size of a long long int: % lu bytes(s)\n", sizeof(long long int));
printf("size of a float : % lu bytes(s)\n", sizeof(float));

return (0);
}
