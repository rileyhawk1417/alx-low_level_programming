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
int i = 0, size = n;
char *res;
va_list list;
va_start(list, n);
/*NOTE: Nesting For loops is nasty x_x */
for (i = 0; i < size; i++)
{
res = va_arg(list, char *);
if (res == NULL)
{
if (i == (size - 1))
{
printf("(nil)");
break;
}

if (separator == NULL)
	printf("(nil)");

else
	printf("(nil)%s", separator);
}

else
{
if (i == (size - 1))
{
printf("%s", res);
break;
}

if (separator == NULL)
	printf("%s", res);
else
	printf("%s%s", res, separator);
}
}
va_end(list);
printf("\n");
}
