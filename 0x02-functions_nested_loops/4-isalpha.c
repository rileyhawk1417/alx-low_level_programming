#include "main.h"
#include <ctype.h>

/**
* _isalpha - Entry point
* @c: Input
* Return: 0 is c is lower/uppercase, 1 if c is not
* Description: Program checks if c is
* lower case or uppercase
*/

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
