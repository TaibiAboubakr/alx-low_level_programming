#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13..
 * @str: A pointer to a string
 * Return: a pointer to the result string
 */
char *rot13(char *str)
{
int i = 0, j = 0;
char letters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B',
'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char r13[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N', 'O'
, 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D'
, 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};




for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == letters[j])
{
str[i] = r13[j];
break;
}
}
}
return (str);
}
