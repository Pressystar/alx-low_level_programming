#include "lists.h"
/**
* get_nodeint_at_index - Write a function that
* returns the nth node of a listint_t linked list.
* @head: insert the first node in the linked list
* @index: index indicating  the node to return
* Return: pointer to the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int p = 0;
listint_t *tmp = head;

while (tmp && p < index)
{
tmp = tmp->next;
p++;
}
return (tmp ? tmp : NULL);
}
