#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  function that concatenates two strings.
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @n: n bytes of s2 to concatenate wiht s1
 * Return:  pointer shall point to a newly allocated space in memory,
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
if (n > j)
n = j;
size = i + n + 1;
rs1 = (char *)malloc(size *sizeof(char));
if (rs1 == NULL)
return (NULL);
for (k = 0; k < i ; k++)
rs1[k] = s1[k];
for (i = 0; k < size - 1; k++, i++)
rs1[k] = s2[i];

rs1[k] = '\0';
return (rs1);
}
