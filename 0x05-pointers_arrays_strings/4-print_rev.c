#include "main.h"
/**
 * print_rev - prints a string, followed by a new line, to stdout.
 * @str: A pointer to a string
 */
void print_rev(char *str)
{
int l = 0, i = 0;
for (i = 0; str[i] != '\0'; i++)
{
l++;
}
for (i = l - 1; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
