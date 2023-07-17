#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* new_dog -  function that creates a new dog
* @name:pointer to name of the dog
* @age: age of the dog
* @owner: pointer to owner of the dog
* Return: pointer to new dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
int i;
int j = strlen(name);
int k = strlen(owner);

p = malloc(sizeof(dog_t));
if (p == NULL)
return (NULL);
p->name = malloc((j + 1) * sizeof(char));
if (p->name == NULL)
{
return (NULL);
free(d);
}
for (i = 0; i < j; i++)
p->name[i] = name[i];
p->name[i] = '\0';

p->owner = malloc((k + 1) * sizeof(char));
if (p->owner == NULL)
{
return (NULL);
free(p->name);
free(d);
}
for (i = 0; owner[i]; i++)
p->owner[i] = owner[i];
p->owner[i] = '\0';
(*p).age = age;
return (p);
}
