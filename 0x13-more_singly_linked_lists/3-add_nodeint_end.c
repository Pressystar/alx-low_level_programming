#include"lists.h"
/**
 * add_nodeint_end - Write a function that adds a new node at the
 *  end of a listint_t
 *  @head: the pointer to the first element
 *  @n: insert the data in a new element
 *  Return: The pointer in the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *tmp = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
