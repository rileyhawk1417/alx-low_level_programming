#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Entry point
 * @n: unsigned int value
 * @separator: char value
 * Return: nothing
 * Description: prints strings from @n, prints strings with
 * @separator to split them
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

int i = 0, size = 0;
char *res;
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

res = va_arg(list, char *);
if (res == NULL)
{
return;
}
else
{
printf("%s", res);
}
}
va_end(list);
printf("\n");
}
