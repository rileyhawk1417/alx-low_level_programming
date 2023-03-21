#include <stdio.h>
#include "main.h" 

/**
* main - Entry point
* Return: Always 0
* Description: Just prints text and exits
*/
int main(void)
{
int i;
char text[] = "_putchar";
for(i = 0; i < 9; i++)
{
_putchar(text[i]);
}
_putchar('\n');
return (0);
}
