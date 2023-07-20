#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anythng, followed by a new line.
 * @format: is a list of types of arguments passed to the function
 * Return: numbers passed to function .
 */
void print_all(const char * const format, ...)
{
int i;
char *s;
float f;
const char *ptr;
va_list args;
ptr = format;
va_start(args, format);
while (*ptr)
{
switch (*ptr)
{
case 'i':
i =  va_arg(args, int);
printf("%d", i);
break;
case 'c':
i =  va_arg(args, int);
printf("%c", i);
break;
case 'f':
f =  va_arg(args, double);
printf("%f\n", f);
break;
case 's':
s =  va_arg(args, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
break;
default:
break;
}
ptr++;
if (*ptr)
printf(", ");
}
va_end(args);
printf("\n");
}
