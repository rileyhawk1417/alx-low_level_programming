#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - Entry point
 * @n: unsigned int value
 * Return: Sum of all numbers given
 * Description: Counts all numbers from @n then returns sum result
 */
int sum_them_all(const unsigned int n, ...)
{
int res = 0, i = 0, size = 0;
va_list list;

if (n == 0)
{
return (0);
}

va_start(list, n);

size = n;
for (i = 0; i < size; i++)
{
res += va_arg(list, int);
}

va_end(list);

return (res);
}
