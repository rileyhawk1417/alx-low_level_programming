#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Entry point
 * @filename: char* value
 * @text_content: char* value
 * Return: status code on fail or success
 * Description: Adds text to the end of the
 * file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;

char *buffer = malloc(sizeof(text_content));
file = fopen(filename, "a+");

while (!feof(file))
{
fgets(buffer, sizeof(buffer), file);
fprintf(file, "%s", text_content);
}

return (0);
}
