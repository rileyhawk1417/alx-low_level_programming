#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: char value
 * Return: just prints a chessboard
 * Description: The function takes in an array & prints it
 */
void print_chessboard(char (*a)[8])
{
int x = 0, y = 0;
for (x = 0; x < 2; x++)
{
for (y = 0; y < 8; y++)
{
_putchar((a[x][y]));
}
}

for (x = 0; x < 4; x++)
{
_putchar('\n');
}

for (x = 6; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
_putchar((a[x][y]));
}
}
_putchar('\n');
}
