#include<stdio.h>
#include<stdlib.h>
#include"dog.h"

/**
 * init_dog - Write a function that initialize
 * @d: pointer to struct the dog to initialize
 * @name: name
 * @age: age to initialize
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
