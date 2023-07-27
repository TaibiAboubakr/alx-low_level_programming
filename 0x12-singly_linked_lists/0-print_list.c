#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to linked lists
 * Return: number of element in list .
 */

size_t print_list(const list_t *h)
{
size_t count;
const list_t *p;

if (h == NULL)
return (0);
p = h;
for (count = 0; p != NULL; p = p->next)
{
if (p->str == NULL)
{
printf("[0] (nil)\n");
count++;
}
else
{
printf("[%d] %s\n", p->len, p->str);
count++;
}
}

return (count);
}
