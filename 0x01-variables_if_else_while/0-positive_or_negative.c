#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Return1: 1 in Errors
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("the number '%d' is positive \n", n);
else if (n < 0)
printf("the number '%d' is negative\n", n);
else
printf("the number '%d' is null\n", n);
return (0);
}