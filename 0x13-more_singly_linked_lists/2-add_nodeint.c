#include"lists.h"
/**
 * add_nodeint - Write a function that adds a new node at the beginning
 * @head: header pointer
 * @n: insert data in the new node
 * Return: pointer to the new node / NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *tmp;

tmp = malloc(sizeof(listint_t));
if (!tmp)
return (NULL);
tmp->n = n;
tmp->next = *head;
*head = tmp;

return (tmp);
}
