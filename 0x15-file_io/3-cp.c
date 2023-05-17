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
int src, dest, read_file, closeSrcSignal, closeDestSignal, writeDest;
char buffer[BUFSIZ];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
src = open(argv[1], O_RDONLY);
if (src < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
dest = open(argv[2], O_CREAT | O_WRONLY, 0664);
read_file = read(src, buffer, BUFSIZ);
if (read_file < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
writeDest = write(dest, buffer, read_file);
if (dest < 0 || writeDest != read_file)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(src);
exit(99);
}
closeSrcSignal = close(src);
closeDestSignal = close(dest);
if (closeSrcSignal < 0 || closeDestSignal < 0)
{
if (closeSrcSignal < 0)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
if (closeDestSignal < 0)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
exit(100);
}
return (0);
}
