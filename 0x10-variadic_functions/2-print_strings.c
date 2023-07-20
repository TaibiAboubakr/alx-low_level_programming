#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints string, followed by a new line.
 * @n: is the number of integers passed to the function
 * @separator: separator between numbers.
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Return: numbers passed to function .
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *x;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, char *);
if (x == NULL)
x = "(nil)";
if (separator != NULL)
{
if (i > 0)
printf("%s", separator);
printf("%s", x);
}
if (separator == NULL)
printf("%s", x);
}
va_end(args);
printf("\n");
}
