#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog type: which has the following elements
* @name: char value
* @age: float value
* @owner: char value
* Description: The struct has details about the dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/*
 * You can use this as well
 * typedef struct dog dog_t;
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
