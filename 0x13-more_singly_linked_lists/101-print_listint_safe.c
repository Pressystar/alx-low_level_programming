#include"lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Write a function that prints a listint_t linked list.
 * @head: insert a pointer to the head
 * Return: negative should be 0 or the number in the node list
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *table, *chair;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

table = head->next;
chair = (head->next)->next;

while (chair)
{
if (table == chair)
{
table = head;
while (table != chair)
{
nodes++;
table = table->next;
chair = chair->next;
}
table = table->next;
while (table != chair)
{
nodes++;
table = table->next;
}
return (nodes);
}
table = table->next;
chair = (chair->next)->next;
}
return (0);
}

/**
 * print_listint_safe - a function that prints
 * @head: insert a pointer to the head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, idx = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (idx = 0; idx < nodes; idx++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
