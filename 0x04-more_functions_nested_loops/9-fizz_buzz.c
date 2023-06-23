#include<stdio.h>
#include"main.h"
/**
 * main - prints the numbers 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the numbers
 * and for the multiples of five prints Buzz
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf(" FizzBuzz ");
else if (i % 3 == 0)
printf(" Fizz ");
else if (i % 5 == 0)
printf(" Buzz ");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
