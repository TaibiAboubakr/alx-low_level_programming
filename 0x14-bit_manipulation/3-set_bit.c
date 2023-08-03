#include "main.h"

/**
 * set_bit -function that sets the value of a bit to 1 at a given index.
 * @index: the index, starting from 0 of the bit you want to set
 * @n :pointer to an unsigned long integer number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int N = *n, S = 1;

if (index >= (8 * sizeof(N)))
return (-1);

S = S << index;

if ((N & S) == 0)
*n = (N | S);

return (1);
}
