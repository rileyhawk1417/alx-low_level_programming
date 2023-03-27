#include "main.h"

/*
 * puts2  - Entry point
 * @str: Char value
 * Return: returns the even parts of the string
 * Description: The function returns even parts of the string
 */
void puts2(char *str) {

  int x = 0;
  while (str[x] != '\0') {
    if (str[x] % 2 == 0) {
      _putchar(str[x]);
    }
    x++;
  }
  _putchar('\n');
}
