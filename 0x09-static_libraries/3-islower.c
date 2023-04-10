#include "main.h"
#include <ctype.h>

/**
* _islower - Entry point
* @c: Input
* Return: 0 is c is lower, 1 if c is not
* Description: Program checks if c is
* lower case or not
*/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
