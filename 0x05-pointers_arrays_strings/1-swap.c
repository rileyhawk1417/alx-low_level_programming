#include "main.h"

/*
 * swap_int - Entry point
 * @a: Int value
 * @b: Int value
 * Return: returns two int values swapped
 * Description: The function swaps the two integers
 */
void swap_int(int *a, int *b) {
  int x, y;
  x = *b;
  y = *a;
  *a = x;
  *b = y;
}
