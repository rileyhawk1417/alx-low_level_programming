#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strstr - Entry point
 * @haystack: char value
 * @needle: char value
 * Return: returns pointer of the located substring
 * Description: The function behaves like strstr
 * returns the match of @needle from @haystack
 */
char *_strstr(char *haystack, char *needle)
{
char *base;
char *query;
/*
 * Does work but am missing something
 * SegFaults why
 */
while (*haystack)
{
base = haystack;
query = needle;
while (*haystack && *query && *haystack == *query)
{
/*
 * This only grabs one letter
 *result = haystack[x];
 */
haystack++;
query++;
}
/* TODO: Add not found value */
if (!*query)
{
return (base);
}
haystack = base + 1;
}
return (NULL);
}
