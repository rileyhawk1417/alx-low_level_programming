#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Entry point
 * @n: unsigned int value
 * @separator: char value
 * Returns: nothing
 * Description: prints numbers from @n, prints numbers with
 * @separator to split them
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int res = 0, i = 0, size = 0;
va_list list;
va_start(list, n);

if (separator == NULL)
{
return;
}

size = n;
for (i = 0; i < size; i++)
{
if (i != 0)
{
printf("%s", separator);
}

res = va_arg(list, int);
printf("%d", res);
}
va_end(list);
printf("\n");
}
