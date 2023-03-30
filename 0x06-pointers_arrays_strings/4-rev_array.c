#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Entry point
 * @a: int value
 * @n: int value
 * Return: returns a reversed string
 * Description: The function returns a string in reverse
 */
void reverse_array(int *a, int n)
{
int i = 0;
int end = n - 1;
while (i < n)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[end--]);
i++;
}
printf("\n");
}
