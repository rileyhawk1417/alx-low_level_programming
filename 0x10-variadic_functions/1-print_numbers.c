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


size = n;
for (i = 0; i < size; i++)
{

res = va_arg(list, int);

/* NOTES: This will remove last value which could be NULL */
if (i == (size - 1))
{
printf("%d", res);
break;
}

if (separator == NULL)
{
printf("%d", res);
}
else
{
printf("%d%s", res, separator);
}
}
va_end(list);
printf("\n");
}
