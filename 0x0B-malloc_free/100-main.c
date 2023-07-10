#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;
    (void)ac;
    
   
    s = argstostr(ac, av);
    if (s == NULL)
    {
        printf("ac is equal to 0 or av NULL\n");
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
