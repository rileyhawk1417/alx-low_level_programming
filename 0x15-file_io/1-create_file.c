#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - Entry point
 * @filename: char* value
 * @text_content: char* value
 * Return: status code on fail or success
 * Description: creates a file & adds text.
 */
int create_file(const char *filename, char *text_content)
{
int result = 1, fd, stringLen = 0, output_length;

if (filename == NULL)
{
result = -1;
}

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
{
result = -1;
}
if (text_content != NULL)
{
stringLen = strlen(text_content);
output_length = write(fd, text_content, stringLen);
if (output_length != stringLen)
	result = -1;
}

close(fd);

return (result);
}
