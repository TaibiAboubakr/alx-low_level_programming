#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

/**
 * main -  a program that multiplies two positive numbers.
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * num1 and num2 should only be composed of digits
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int *pn1, *pn2, *pnres;
char* arg1 = argv[1], *arg2 = argv[2];
int len_arg1,len_arg2,i,m,r = 0;
if (argc < 3)
{
printf("Error\n");
exit (98);
}
len_arg1=strlen(argv[1]);
len_arg2=strlen(argv[2]);
for (i = 0; i < len_arg1; i++)
if (argv[1][i] < 48 || argv[1][i] > 57)
{
printf("Error\n");
exit (98);
}
for (i = 0; i < len_arg2; i++)
if (argv[2][i] < 48 || argv[2][i] > 57)
{
printf("Error\n");
exit (98);
}
pn1 = (int *)malloc(len_arg1 *sizeof(int));
if (pn1 == NULL){
exit (98);
}
pn2 = (int *)malloc(len_arg1 *sizeof(int));
if (pn2 == NULL){
free(pn1);
exit (98);
}
for (i = 0; i < len_arg1; i++){
pn1[i] = arg1[i] - 48;
/* printf("in ptr n1 %d\n",pn1[i]); */
}
for (i = 0; i < len_arg2; i++){
/* printf("arv2 is : %c\n",argv[2][i]); */
pn2[i]=arg2[i] - 48;
/* printf("in ptr n2 %d\n",pn2[i]); */
}
pnres = (int *)malloc((len_arg1 + len_arg2) *sizeof(int));
if (pnres == NULL){
exit (98);
}
/* printf("after for calc\n"); */
for (i = 0;;i++){
if (len_arg1 >= 0 && len_arg2 >= 0){
m = pn1[len_arg1-1] * pn2[len_arg2-1] + r;
r = m / 10;
pnres[i] = m % 10;
}
if (len_arg1 >= 0 && len_arg2 < 0){
m = pn1[len_arg1-1] + r;
r = m / 10;
pnres[i] = m % 10;
}
if (len_arg2 >= 0 && len_arg1 < 0){
m = pn2[len_arg2-1] + r;
r = m / 10;
pnres[i] = m % 10;
}
len_arg1--;
len_arg2--;
if (len_arg1 < 0 && len_arg2 < 0 && r > 0){
  i++;
  pnres[i] = r;
    r = 0;
}
if (len_arg1 < 0 && len_arg2 < 0 && r == 0)
break;
}
return (0);
}
