#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anythng, followed by a new line.
 * @format: is a list of types of arguments passed to the function
 * Return: numbers passed to function .
 */
void print_all(const char * const format, ...)
{
int count = 0, check = 0;

const char *ptr;
va_list args;
ptr = format;
va_start(args, format);
while (*ptr)
{
if (*ptr && count > 0 && check != 0)
printf(", ");
check = 1;

ptr++;

}
va_end(args);
printf("\n");
}
