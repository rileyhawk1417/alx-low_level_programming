#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Entry point
 * @name: char value
 * @age: float value
 * @owner: char value
 * Return: returns nothing
 * Description: The function prints the struct of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int len1 = 0, len2 = 0;
  dog_t *dogs;

while (len1[name] != '\0')
len1++;

while (len2[owner] != '\0')
len2++;

dogs = malloc(sizeof(dog_t));

if (dogs == NULL)
{
free(dogs);
return (NULL);
}

dogs->name = malloc(sizeof(dogs->name) * len1);
if (dogs->name == NULL)
{
free(dogs->name);
free(dogs);
return (NULL);
}
dogs->name =  name;
dogs->owner =  owner;
dogs->age = age;

return (dogs);
}
