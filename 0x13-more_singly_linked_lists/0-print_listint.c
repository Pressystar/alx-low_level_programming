#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements
 * of a linked list
 * @h: the linked lists type of listint
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
size_t p = 0;

while (h)
{
p++;
printf("%d\n", h->n);
h = h->next;
}
return (p);
}
