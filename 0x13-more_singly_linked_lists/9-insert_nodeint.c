#include"lists.h"
/**
 * insert_nodeint_at_index - Write a function that inserts a new
 * node at a given position.
 * @head: The pointer to the first node in the linked list
 * @n: insert data in the new node
 * @idx: indicating that the new node is added
 * Return: pointer to the new mode / NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int p;
listint_t *new;
listint_t *tmp = *head;

new = malloc(sizeof(listint_t));
if (!new || head)
return (NULL);
new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (p = 0; tmp && p < idx; p++)
{
if (p == idx - 1)
{
new->next = tmp->next;
tmp->next = new;
return (new);
}
else
tmp = tmp->next;
}
return (NULL);
}
