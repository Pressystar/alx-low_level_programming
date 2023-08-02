#include"lists.h"
/**
 * pop_listint - Write a function that deletes the head node of a listint_t
 * @head: The pointer to the first element
 * Return: data inside the elements deleted or
 * 0 if the list  is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int sum;

if (!head || !*head)
return (0);

sum = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (sum);
}
