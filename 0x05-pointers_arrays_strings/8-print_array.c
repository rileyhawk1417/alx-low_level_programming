#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: Int value
 * @n: Int value
 * Return: returns the element of the array
 * Description: The function takes array & number then
 * returns the array elements
 */
void print_array(int *a, int n)
{
int x = 0;
int y = 0;
if(n <= 0)
{
printf("\n");
}
else
{
for (x = 0; x < n - 1; x++)
{
printf("%d, ", *(a + x));
y = x;
}
printf("%d", a[y + 1]);
printf("\n");
}
}
