#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Entry point
 * @filename: char* value
 * @letters: size_t value
 * Return: return number of characters
 * Description: Reads & Displays text from the file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, input_count, output_count;
char *characters = (char *)malloc(letters);
if (characters == NULL)
	return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
{
free(characters);
return (0);
}

input_count = read(fd, characters, letters);
output_count = write(1, characters, input_count);
close(fd);
if (output_count < 0)
{
free(characters);
return (0);
}

free(characters);
return (output_count);
}
