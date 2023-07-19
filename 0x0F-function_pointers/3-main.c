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
int res = 0, n1, n2;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") &&
strcmp(argv[2], "%"))
{
printf("Error\n");
exit(99);
}
if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
strcmp(argv[3], "0") == 0)
{
printf("Error\n");
exit(100);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);

res = (*get_op_func(argv[2]))(n1, n2);
printf("Result is %d\n", res);

return (0);
}
