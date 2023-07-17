#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* init_dog - function that initialize a variable of type struct dog
* @d: struct dog
* @name:pointer to name of the dog
* @age: age of the dog
* @owner: pointer to owner of the dog
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = strdup(name);
(*d).age = 3.5;
d->owner = strdup(owner);

}
