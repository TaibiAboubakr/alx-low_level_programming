#include "main.h"


/**
 * read_textfile - function that reads a text file and prints it
 *  to the POSIX standard output.
 * @filename: pointer to string that contain the filename
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buffer;

if (filename == NULL)
return (0);
buffer = malloc(letters);
if (buffer == NULL)
return (0);

o = open(filename, O_RDONLY);
if (o == -1)
{
free(buffer);
return (0);
}

r = read(o, buffer, letters);
if (r == -1)
{
free(buffer);
close(o);
return (0);
}

w = write(STDOUT_FILENO, buffer, r);
if (w == -1)
{
close(o);
free(buffer);
return (0);
}


close(o);
free(buffer);
return (w);
}
