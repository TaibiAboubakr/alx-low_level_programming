#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);



/**
 * main - check the code
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

int res, i, x, neg = 0;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
for (i = 0; argv[1][i]; i++)
{
if (argv[1][0] == '-')
{
neg = 1;
continue;
}
if (argv[1][i] < 48 || argv[1][i] > 57)
exit(1);
}
if (neg == 1)
{
printf("Error\n");
exit(2);
}
x = atoi(argv[1]);
print_opcodes(x);
return (0);
}
/**
 * print_opcodes - function that print opcodes for main function
 * @num_bytes : number of bytes to be printed.
 */
void print_opcodes(int num_bytes)
{
int i;
void *print_opcodes = (void *)main;
unsigned char *opcode = (unsigned char *)print_opcodes;
/* printf("The opcodes of the main function:\n"); */
for (i = 0; i < num_bytes; i++)
printf("%02x ", opcode[i]);
printf("\n");
}
