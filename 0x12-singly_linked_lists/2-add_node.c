#include "lists.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * add_node - Write a program that adds a new node
 * @head: pointer points to the first node
 * @str: new nodes to string
 * Return: ponter straight to the new node, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int length = 0;

while (str[length])
length++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->len = length;
new->str  = strdup(str);
new->next = (*head);
(*head) = new;

return (*head);
}
