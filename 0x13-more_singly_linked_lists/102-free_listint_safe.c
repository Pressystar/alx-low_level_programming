#include"lists.h"

size_t free_listint_safe(listint_t **h);
size_t looped_listint_count(listint_t *head);

/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: insert the header
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *temp;
size_t len, idx;

len = looped_listint_count(*h);

if (len == 0)
{
for (; h != NULL && *h != NULL; len++)
{
temp = (*h)->next;
free(*h);
*h = temp;
}
}
else
{
for (idx = 0; idx < len; idx++)
{
temp =
(*h)->next;
free(*h);
*h = temp;
}
*h = NULL;
}
h = NULL;
return (len);
}

/**
 * looped_listint_count - the function loop that counts the numbers
 * @h: Insert the header
 * Return: negative 0 / positive the number of node
 */
size_t looped_listint_count(listint_t *h)
{
listint_t *table, *chair;
size_t len = 1;

if (h == NULL || h->next == NULL)
return (0);
table = h->next;
chair = (h->next)->next;

while (chair)
{
if (table == chair)
{
table = h;
while (table != chair)
{
len++;
table = table->next;
chair = chair->next;
}
table = table->next;
while (table != chair)
{
len++;
table = table->next;
}
return (len);
}
table = table->next;
chair = (chair->next)->next;
}
return (0);
}

