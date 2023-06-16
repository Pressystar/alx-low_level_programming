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

printf("size of a char: %i byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %i byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %i bytes(s)\n", (unsigned long)sizeof(c)
printf("size of a long long int: %i bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float : %i bytes(s)\n", (unsigned long)sizeof(f));

return (0);
}
