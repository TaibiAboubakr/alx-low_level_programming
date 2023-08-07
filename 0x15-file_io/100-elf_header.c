#include "main.h"
void print_magic(unsigned char *e_ident);
/**
 * closefile - function that close files.
 * @of_elf: file descriptor of file to close
 */
void closefile(ssize_t of_elf)
{
ssize_t cf_elf;

cf_elf = close(of_elf);
if (cf_elf == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", of_elf);
exit(98);
}
}


/**
 * main - program that copies the content of a file to another file.
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Return: Always 0.
  */
int main(int argc, char *argv[])
{
ssize_t of_elf, rf_elf = BUF_SIZE;
char *file_elf;
Elf64_Ehdr *elf_header;


if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
exit(98);
}
file_elf = argv[1];

of_elf = open(file_elf, O_RDONLY);
if (of_elf == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file_elf);
exit(98);
}
elf_header = malloc(sizeof(Elf64_Ehdr));
if (elf_header == NULL)
{
dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
closefile(of_elf);
exit(98);
}
rf_elf = read(of_elf, elf_header, sizeof(Elf64_Ehdr));
if (rf_elf  == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_elf);
closefile(of_elf);
exit(98);
}

closefile(of_elf);
return (0);
}
