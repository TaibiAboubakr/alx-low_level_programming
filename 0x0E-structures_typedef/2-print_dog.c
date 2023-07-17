#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* print_dog - function that prints a struct dog
* @d: pointer to struct dog
*/

void print_dog(struct dog *d)
{
if (d == NULL)
exit(0);
if ((*d).name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", (*d).name);

printf("Age: %f\n", (*d).age);
if ((*d).owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", (*d).owner);

}
