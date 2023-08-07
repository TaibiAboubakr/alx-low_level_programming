#include "main.h"


/**
 * create_file - Write a function that appends text at the end of a file.
 * @filename: pointer to string that contain the name of the file
 * @text_content: is a NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure 
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t o, w;
int i = 0;

if (filename == NULL)
return (-1);


o = open(filename, O_WRONLY | O_APPEND);
if (o == -1)
return (-1);
while (text_content[i])
i++;

w = write(o, text_content, i);
if (w == -1)
return (0);

close(o);

return (1);
}
