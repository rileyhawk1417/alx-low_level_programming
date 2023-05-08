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
int fd, size;
char *characters = (char *)malloc(letters);
fd = open(filename, O_RDONLY);
if (fd < 0)
{
perror("r1");
exit(1);
}
size = read(fd, characters, letters);
write(1, characters, letters);
close(fd);
free(characters);

return (size);
}
