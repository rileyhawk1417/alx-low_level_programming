#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Entry point
 * @d: struct dog value
 * Return: returns nothing
 * Description: The function prints the struct of dog
 */
void print_dog(struct dog *d)
{
char *name = "", *owner = "";

if (d == NULL)
{
return;
}

if (d->name == NULL)
{
name = "(nil)";
}

else
{
name = d->name;
}

if (d->owner == NULL)
{
owner = "(nil)";
}

else
{
owner = d->owner;
}

printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
