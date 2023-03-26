#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: return 1 means it exited with error
 * Description: Program simply returns a string
 * using the printf function
 */
int main(void)
{
char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int x = 0;
for (x = 0; x < 70; x++)
{
putchar(txt[x]);
}
putchar('\n');
return (1);
}
