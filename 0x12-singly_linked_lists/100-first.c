#include <stdio.h>
#include <stdlib.h>
#include <sys/cdefs.h>
/*NOTE: need to use attribute & constructor for compiler to pass it first */
/*NOTE: Seems to work fine on clang & gcc */

/**
 * first - Entry point
 * Return: returns nothing
 * Description: runs the function before main
 */
void __attribute__((constructor)) first(void)
{
char *str1 = "You're beat! and yet, you must allow,\n";
char *str2 = "I bore my house upon my back!\n";
printf("%s%s", str1, str2);
}
