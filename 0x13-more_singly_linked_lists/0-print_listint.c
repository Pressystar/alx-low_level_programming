#include"lists.h"

/**
 * print_listint - Write a function that prints all the elements
 * of a linked list
 * @h: The linked lists type of listint
 * Return: The number of nodes printed
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
