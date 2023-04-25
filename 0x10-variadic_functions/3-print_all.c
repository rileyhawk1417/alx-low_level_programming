#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Entry point
* @format: format modifier char value
* Return: nothing
* Description: Similar to printf function '%' is not used
*/
/*NOTE:Since there are no '%' for modifiers we have to manually*/
/*set escape state to 1 to print. To build printf use conditions for state*/
void print_all(const char *const format, ...)
{
int i = 0, x, state = 0;
char *s;
const char mods[] = "cifs";
va_list args;
va_start(args, format);

while (format && format[i])
{
x = 0;
while (mods[x])
{
	if (format[i] == mods[x] && state)
	{
		printf(", ");
		break;
	} x++;
}
switch (format[i])
{
case 'c':
	putchar((char)va_arg(args, int)), state = 1;
	break;
case 's':
	s = va_arg(args, char *);
	if (!s)
	{
		printf("(nil)");
		break;
	}
	printf("%s", s), state = 1;
	break;
case 'i':
	printf("%d", va_arg(args, int)), state = 1;
	break;
case 'f':
	printf("%f", va_arg(args, double)), state = 1;
	break;
} i++;
}
printf("\n"), va_end(args);
}
