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
int result = 1, stringLen = 0, output_length, fd;
if (filename == NULL)
	result = -1;

fd = open(filename, O_WRONLY | O_APPEND);
if (fd < 0)
	result = -1;

if (text_content)
{
stringLen = strlen(text_content);
output_length = write(fd, text_content, stringLen);
if (output_length != stringLen)
	result = -1;
}

close(fd);

return (result);
}
