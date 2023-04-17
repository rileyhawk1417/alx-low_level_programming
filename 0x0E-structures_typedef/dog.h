#ifndef DOG_H

typedef struct dog {
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
