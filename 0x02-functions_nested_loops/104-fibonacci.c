#include <stdio.h>
/**
 * main -prints the first 98 Fibonacci numbers,
 * Return: ALways 0 (Success)
 */
int main(void)
{
unsigned long int i, j, k, l, m, n, o;
j = 1;
k = 2;
printf("%lu", j);
for (i = 1; i <= 90; i++)
{
	printf(", %lu", k);
	k = k + j;
	j = k - j;
}
l = j / 1000000000;
m = j % 1000000000;
n = k / 1000000000;
o = k % 1000000000;
for (i = 92; i <= 98; ++i)
{
printf(", %lu", n + (o / 1000000000));
printf("%lu", o % 1000000000);
n = n + l;
l = n - l;
o = o + m;
m = o - m;
}
printf("\n");
return (0);
}
