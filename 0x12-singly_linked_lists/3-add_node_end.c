#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
#include <string.h>

/**
 * add_node_end - Write a function that adds a new node at the end
 * @head: pointer to the list of the nominated
 * @str:   string
 * Return: address, NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *tmp = *head;
int length = 0;

while (str[length])
length++;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = length;
new->next = NULL;
{
*head = new;
return (new);
}
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
