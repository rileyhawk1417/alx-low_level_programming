#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Entry point
 * @dog: unsigned int value
 * Return: returns 0
 * Description: The function the dog details given
 */
void print_dog(struct dog *d) {
  char *name = d->name, *owner = d->owner, *age = "(nil)";
  if (d == NULL) {
    NULL;
  }

  if (d->name == NULL) {
    name = "(nil)";
  }
  if (d->owner == NULL) {
    owner = "(nil)";
  }
  if (d->age == 0) {
    age = "(nil)";
  } else {
    if (d->age == 0 || d->age < 0 || d->age == 0.0) {
      printf("Name: %s\nAge: %s\nOwner: %s\n", name, age, owner);
    } else {

      printf("Name: %s\nAge: %.1f\nOwner: %s\n", name, d->age, owner);
    }
  }
}
