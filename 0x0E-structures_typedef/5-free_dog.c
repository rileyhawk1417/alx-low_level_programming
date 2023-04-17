#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * @d: pointer to dog struct
 * Description: Simply frees up allocated memory
 * Returns: Nothing
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
