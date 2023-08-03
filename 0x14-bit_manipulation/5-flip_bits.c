#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: unsigned long integer number 1
 * @m :unsigned long integer number 2
 * Return:the number of bits to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int S, T = 1;
unsigned int bit_count = 0;

S = n ^ m;

while (S)
{
if ((S & T) == 1)
bit_count++;
S = S >> 1;
}
return (bit_count);
}

