#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - function that concatenates all the arguments of your program.
 * @ac: args count
 * @av: args value
 * Returns NULL if ac == 0 or av == NULL
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, l = 0, size;
char *p;
if (ac == 0 || *av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
j++;
k += j;
}
size = k + ac + 1;
p = (char *)malloc(size *sizeof(char));

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
p[l] = av[i][j];
l++;
}
p[l] = '\n';
l++;
}
p[l] = '\0';
return (p);
}
