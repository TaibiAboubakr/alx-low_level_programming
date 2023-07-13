#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
void check(int len_arg1, int len_arg2, char *av[]);
int checkiszero(int l1, int l2, int *p1, int *p2);
void forfree(int **pp, int *pn1, int *pn2, int *pt, int len_arg1);
void puterror(void);
/**
 * putError - print Error followed by newline.
 */
void putError(void)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
}
/**
 * check - check if the passed arguments are correct.
 * @len_arg1:len of number 1
 * @len_arg2:len of number 2
 * @av:pointer to the array that store arguments
 *
 */
void check(int len_arg1, int len_arg2, char *av[])
{
int i = 0;
for (i = 0; i < len_arg1; i++)
if (av[1][i] < 48 || av[1][i] > 57)
{
putError();
exit(98);
}
for (i = 0; i < len_arg2; i++)
if (av[2][i] < 48 || av[2][i] > 57)
{
putError();
exit(98);
}
}
/**
 * checkiszero - check if number1 or number 2 is equal 0.
 * @l1:len of number 1
 * @l2:len of number 2
 * @p1:pointer to the array that store number 1
 * @p2:pointer to the array that store number 2
 * Return: 0 if mul of tow arguments passed is equal to 0 or 1 otherwise
 */
int checkiszero(int l1, int l2, int *p1, int *p2)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < l1; i++)
sum1 += p1[i];
for (i = 0; i < l2; i++)
sum2 += p2[i];
if (sum1 == 0 || sum2 == 0)
return (0);
return (1);
}
/**
 * forfree - free all used pointers
 * @pp: The number of command-line arguments
 * @pn1:Poninter
 * @pn2 : Poninter
 * @pp : Poninter
 * @pt : Poninter
 * @len_arg1:len of number 1
 */
void forfree(int **pp, int *pn1, int *pn2, int *pt, int len_arg1)
{
int i;
for (i = 0; i < len_arg1; i++)
free(pp[i]);
free(pn1);
free(pn2);
free(pt);
free(pp);
}

/**
 * main - program that multiplies two positive numbers.
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * num1 and num2 should only be composed of digits
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int *pn1, *pn2, **pp, *pt;
char *arg1 = argv[1], *arg2 = argv[2];
int len_arg1, len_arg2, i, j = 0, m, l = 0, r = 0, idxn1 = 0, k, tsum = 0;
if (argc != 3)
{
putError();
exit(98);
}
len_arg1 = strlen(argv[1]);
len_arg2 = strlen(argv[2]);
check(len_arg1, len_arg2, argv);
pn1 = (int *)malloc(len_arg1 *sizeof(int));
if (pn1 == NULL)
{
putError();
exit(98);
}
pn2 = (int *)malloc(len_arg2 *sizeof(int));
if (pn2 == NULL)
{
putError();
free(pn1);
exit(98);
}
for (i = 0; i < len_arg1; i++)
pn1[i] = arg1[i] - 48;

for (i = 0; i < len_arg2; i++)
pn2[i] = arg2[i] - 48;

if (checkiszero(len_arg1, len_arg2, pn1, pn2) == 0)
{
_putchar(48);
_putchar('\n');
return (0);
}
pp = (int **)malloc(len_arg1 *sizeof(int *));
if (pp == NULL)
{
putError();
free(pn1);
free(pn2);
exit(98);
}
for (i = 0; i < len_arg1; i++)
{
pp[i] = (int *)malloc((len_arg1 + len_arg2 + i) * sizeof(int));
if (pp[i] == NULL)
{
while (j < i)
free(pp[j]);
free(pn1);
free(pn2);
free(pp);
putError();
exit(91);
}
for (j = 0; j < len_arg1 + len_arg2 + i; j++)
pp[i][j] = 0;
}
idxn1 = (len_arg1 - 1);
for (k = len_arg1 - 1, i =  0; i < len_arg1; i++, idxn1++, k--)
{
for (j = len_arg2 - 1, l = (len_arg1 + len_arg2 - 1); j >= 0 ; j--, l--)
{
m = pn1[k] * pn2[j] + r;
r = m / 10;
pp[i][l - i] = m % 10;
if (j == 0 && r > 0)
{
l--;
pp[i][l - i] = r;
r = 0;
}
}
}

k = len_arg1 + len_arg2 + 1;
pt = (int *)malloc(k *sizeof(int));
if (pt == NULL)
{
for (i = 0; i < len_arg1; i++)
free(pp[i]);
free(pn1);
free(pn2);
free(pp);
exit(98);
}
for (j = 0; j < k; j++)
pt[j] = 0;
for (i = len_arg1 + len_arg2; i >= 0; i--)
{
tsum = 0;
for (j = 0; j < len_arg1; j++)
{
tsum += pp[j][i];
}
tsum = tsum + r;
r = tsum / 10;
pt[k] = tsum % 10;
k--;
}
i = 0;
while (pt[i] == 0)
i++;
for (; i <= len_arg1 + len_arg2; i++)
_putchar (pt[i] + 48);
_putchar('\n');
forfree(pp, pn1, pn2, pt, len_arg1);
return (0);
}
