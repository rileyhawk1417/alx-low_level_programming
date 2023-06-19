#include "main.h"
#include <ctype.h>

/**
 * _isupper - Entry point
 * @c: Int value
 * Return:returns 0 if lowercase & 1 if uppercase
 * Description: Program returns code if c isupper/not
 */
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
