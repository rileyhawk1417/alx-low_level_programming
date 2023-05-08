#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 * @argc: int value
 * @argv: char[]* value
 * Return: status code on fail or success
 * Description: Adds text to the end of the
 * file.
 */
int main(int argc, char *argv[])
{
int src, dest, read_file;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

src = open(argv[1], O_RDONLY);

dest = open(argv[2], O_CREAT | O_WRONLY, 0664);

read_file = read(src, buffer, 1024);
write(dest, buffer, read_file);

close(src);
close(dest);
return (0);
}
