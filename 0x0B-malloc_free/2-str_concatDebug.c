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

while (s1[i])
i++;

printf("s1 : %s\n",s1);
printf("i s1 is %d\n",i);

while (s2[j])
j++;

printf("s2 : %s\n",s2);
printf("j s2 is %d\n",j);
printf("hello before malloc\n");
size = i + j + 1;
printf("size is %d\n",size);
rs1 = (char* )malloc(size * sizeof(char));
if (rs1 == NULL)
return (NULL);

printf("hello after malloc\n");

for (k = 0; k < i ; k++)
rs1[k] = s1[k];
j = 0;
while (rs1[j])
j++;
printf("j rs1 is %d\n",j);
printf("rs1 is %s\n",rs1); 

for (i = 0; k < size; k++){
rs1[k] = s2[i];
i++;
}
rs1[k] ='\0'; 

return (rs1);
}
