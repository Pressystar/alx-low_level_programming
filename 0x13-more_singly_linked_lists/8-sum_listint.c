#include"lists.h"
/**
 * sum_listint - Write a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: insert thr first node in the linked list
 * Return: the total sum
 */
int sum_listint(listint_t *head)
{
int num = 0;
listint_t *tmp = head;

while (tmp)
{
num += tmp->n;
tmp = tmp->next;
}
return (num);
}
