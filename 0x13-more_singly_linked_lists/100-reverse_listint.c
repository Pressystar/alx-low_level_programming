#include"lists.h"
/**
 * reverse_listint - Write a function that reverses a
 * listint_t linked list.
 * @head: insert the pointer to the first node
 * Return: the pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *pv = NULL;
listint_t  *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = pv;
pv = *head;
*head = next;
}
*head = pv;

return (*head);
}
