#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Entry point
 * @name: char value
 * @age: float value
 * @owner: char value
 * Return: returns nothing
 * Description: The function prints the struct of dog
 * Sorry for squashed code needs to pass betty linting
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int len1 = 0, len2 = 0, i = 0;
dog_t *dogs;
/* NOTE: strlen usually leaves out null character using while is better */
while (len1[name] != '\0')
{
len1++;
}
while (len2[owner] != '\0')
{
len2++;
}
dogs = malloc(sizeof(dog_t));
if (dogs == NULL)
{
free(dogs);
return (NULL);
}
/* NOTE: strcpy didnt work so use malloc to assign then for loop to copy */
dogs->name = malloc(sizeof(dogs->name) * len1);
if (dogs->name == NULL)
{
free(dogs);
}
for (i = 0; i <= len1; i++)
{
dogs->name[i] = name[i];
}
dogs->owner = malloc(sizeof(dogs->owner) * len2);
if (dogs->owner == NULL)
{
free(dogs);
}
for (i = 0; i <= len2; i++)
{
dogs->owner[i] = owner[i];
}
dogs->age = age;
return (dogs);
}
