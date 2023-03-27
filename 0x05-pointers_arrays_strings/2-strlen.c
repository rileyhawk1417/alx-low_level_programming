#include "main.h"

/*
 * strlen - Entry point
 * @s: Char value
 * Return: returns the size of string
 * Description: The function returns the length of string
 */
int _strlen(char *s) {
  int x = 0;
  while (s[x] != '\0') {
    x++;
  }
  return x;
}
