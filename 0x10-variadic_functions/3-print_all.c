#include <stdarg.h>
#include "variadic_functions.h"
void print (int count);
/**
 * print - function that prints .
 * @count: counter
 */
void print(int count)
{
if (count > 0)
printf(", ");
}
/**
 * print_all - function that prints anythng, followed by a new line.
 * @format: is a list of types of arguments passed to the function
 * Return: numbers passed to function .
 */
void print_all(const char * const format, ...)
{
int count = 0;
char *s;
const char *ptr = format;
va_list args;
va_start(args, format);

while (*ptr)
{
switch (*ptr)
{
case 'i':
print(count);
count++;
printf("%d", va_arg(args, int));
break;
case 'c':
print(count);
count++;
printf("%c", va_arg(args, int));
break;
case 'f':
print(count);
count++;
printf("%f", va_arg(args, double));
break;
case 's':
print(count);
count++;
s =  va_arg(args, char *);

if (s == NULL)
s = "(nil)";
printf("%s", s);
break;
default:
break;
}
ptr++;

}
va_end(args);
printf("\n");
}
