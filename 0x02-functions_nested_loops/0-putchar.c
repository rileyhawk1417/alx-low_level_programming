#include <unistd.h>
#include "main.h"

/**
* main - Entry point
* Return: Always 0
* Description: Just prints text and exits
*/
int main(void)
{
int i;
char txt[8] = "_putchar";
for (i = 0; i <= 7; i++)
{
_putchar(txt[i]);
}
_putchar('\n');
return (0);
}

