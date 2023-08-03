#include "main.h"


/**
* get_endianness - function that checks the endianness.
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
int num = 0x128;
size_t i, size;
char *bytes;

bytes = (char *)&num;
size = sizeof(num);

for (i = 0; i < size; i++)
{
if (bytes [i] > bytes [i + 1])
return (1);
}
return (0);
}

