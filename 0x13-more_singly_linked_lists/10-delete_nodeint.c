#include"lists.h"
/**
 * delete_nodeint_at_index - Write a function that deletes the node at index
 *  index of a listint_t linked list.
 *  @head: Insert the pointer to the first element in the linked list
 *  @index: index indicating the node to delete
 *  Return: 1 (Success) / -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
listint_t *current = NULL;
unsigned int p = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
while (p < index - 1)
{
if (!tmp || !(tmp->next))
return (-1);
tmp = tmp->next;
p++;
}
current = tmp->next;
tmp->next = current->next;
free(current);
return (1);
}
