#include "lists.h"

/**
 * find_listint_loop - Write a function that finds the loop in a linked list.
 * @h: insert the pointer to the header
 * Return: negative 0 / positve the number of node
 */
listint_t *find_listint_loop(listint_t *h)
{
listint_t *table, *chair;

if (h == NULL || h->next == NULL)

return (NULL);
table = h->next;
chair = (h->next)->next;

while (chair)
{
if (table == chair)
{
table = h;
while (table != chair)
{
table = table->next;
chair = chair->next;
}

return (table);
}
table = table->next;
chair = (chair->next)->next;
}
return (NULL);
}
