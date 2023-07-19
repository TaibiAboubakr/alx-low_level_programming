#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
* get_op_func - function
* @s: pointer to operator argv[2]
* Return: pointer to function
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}
printf("from get op , op not mathched\n");
return (NULL);
}
