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
int result, fd;

if (filename == NULL)
{
result = -1;
}

fd = open(filename, O_RDWR | O_CREAT);

if (fd == -1)
{
result = -1;
}

if (text_content != NULL)
{
write(fd, text_content, (strlen(text_content) + 1));
}

close(fd);

result = 1;

return (result);
}
