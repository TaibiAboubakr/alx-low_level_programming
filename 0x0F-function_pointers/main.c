#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
if (argc == 0)
return (0);
int i;
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
};
char *s = "*";
if (ops[i].op =! NULL)
if ((strcmp(ops[i].op), s) == 0)
printf("ops[i].f",ops[i].f);
}