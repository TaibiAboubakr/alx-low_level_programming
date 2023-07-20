#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anythng, followed by a new line.
 * @format: is a list of types of arguments passed to the function
 * Return: numbers passed to function .
 */
/* int (*get_datatype(char *s))(int, int) */
/* {
op_t type[] = {
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
printf("Error : No Operator Matched\n");
return (NULL);
} */
/**
 * print_all - function that prints anythng, followed by a new line.
 * @format: is a list of types of arguments passed to the function
 * Return: numbers passed to function .
 */
void print_all(const char * const format, ...)
{
int count = 0, check;
int i;
char *s;
float f;
const char *ptr;
va_list args;
ptr = format;
va_start(args, format);
while (*ptr)
{
check = 1;
switch (*ptr)
{
case 'i':
count++;
i =  va_arg(args, int);
printf("%d", i);
break;
case 'c':
count++;
i =  va_arg(args, int);
printf("%c", i);
break;
case 'f':
count++;
f =  va_arg(args, double);
printf("%f\n", f);
break;
case 's':
count++;
s =  va_arg(args, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
break;
default:
check = 0;
break;
}
ptr++;
if (*ptr && count > 0 && check !=0)
printf(", ");
}
va_end(args);
printf("\n");
}
