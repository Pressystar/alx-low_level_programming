#include "lists.h"
/**
 * print_listint - Write a function that prints all elements
 * @h: type of listint to print
 * Return: the actual number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t p = 0;

while (h)
{
printf("%d\n", h->n);
p++;
h = h->next;
}

return (p);
}
