#include "lists.h"
/**
 * free_listint - Write a function that frees a listint_t list
 * @head: The listint list to be frees
 */
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
