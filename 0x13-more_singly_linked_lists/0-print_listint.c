#include "lists.h"
#include<stdlib.h>
#include<string.h>
#include <stdio.h>
/**
 * print_listint - Write a function that prints all elements
 * @h: type of listint to print
 * Return: the actual number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t sum = 0;

while (h)
{
printf("%d\n", h->n);
sum++;
h = h->next;
}

return (sum);
}
