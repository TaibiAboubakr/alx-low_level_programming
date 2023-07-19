#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"



/**
 * main - check the code
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int res, i, j, x, neg = 0;
if (argc != 2)
{
printf("Error\n");
exit(1);
}

for (i = 0; argv[1][i]; i++)
{
if (argv[1][0] == '-'){
neg = 1;
continue;
}
if (argv[1][i] < 48 || argv[1][i] > 57){
exit(1);
}
}
if (neg == 1){
printf("Error\n");
exit(2);
}
return (0);
}
