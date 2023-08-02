#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements
 * @h: the linked lists type of listint
 * Return: the number of nodes
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
