#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @d: struct dog
 * @name: char value
 * @age: float value
 * @owner: char value
 * Return: returns nothing
 * Description: The function assigns the values received
 * to struct dog. Dog is initialized & saved to the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;
}
