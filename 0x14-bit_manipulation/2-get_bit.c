#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to get
 * @n :unsigned long integer number
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
int x = 0;
if (index >= (8 * sizeof(n)))
return (-1);

n = n >> index;
x = n & 1;
return (x);
}
