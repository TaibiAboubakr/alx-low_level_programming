#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "NULL", 0.0, "");
    printf("My name is %s,my owner is %s and I am %.1f :) - Woof!\n", my_dog.name, my_dog.owner, my_dog.age);
    return (0);
}