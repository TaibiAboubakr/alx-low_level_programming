#include "main.h"


/**
 * create_file - function that reads a text file and prints it
 *  to the POSIX standard output.
 * @filename: pointer to string that contain the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 *         file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
ssize_t o, w;
int i = 0;
mode_t perm = S_IRUSR | S_IWUSR;

if (filename == NULL)
return (-1);


o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, perm);
if (o == -1)
return (-1);
while (text_content[i])
i++;

w = write(o, text_content, i);
if (w == -1)
{
close(o);
return (0);
}

close(o);

return (1);
}
