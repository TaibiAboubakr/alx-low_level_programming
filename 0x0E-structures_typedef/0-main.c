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
    struct dog dog2;
    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    
    dog2.name = "alice";
    dog2.age = 7.9;
    dog2.owner = "test";
    printf("My name is %s, and I am %.1f and owner is %s:) - Woof!\n", dog2.name, dog2.age,dog2.owner);
    
    return (0);
}