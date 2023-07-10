#include "main.h"
#include <stdlib.h>

/**
 * *str_concat -  function that concatenates two strings.
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: a pointer to s1 string., or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i = 0, j = 0, k, size = 0;
char *rs1;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i])
i++;
while (s2[j])
j++;
size = i + j + 1;
rs1 = (char *)malloc(size *sizeof(char));
if (rs1 == NULL)
return (NULL);
for (k = 0; k < i ; k++)
rs1[k] = s1[k];
for (i = 0; k < size; k++)
{
rs1[k] = s2[i];
i++;
}
rs1[k] = '\0';
return (rs1);
}
