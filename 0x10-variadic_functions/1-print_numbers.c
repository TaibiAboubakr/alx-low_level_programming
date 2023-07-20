#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: is the number of integers passed to the function
 * @separator: separator between numbers.
 * Return: numbers passed to function .
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, x;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, int);
if (separator != NULL)
{
if (i > 0)
printf("%s", separator);
printf("%d", x);
}
if (separator == NULL)
printf("%d", x);
}
va_end(args);
printf("\n");
}
