#include "elf_header1.h"
#include "elf_header.h"

/**
 * check_is_elf - Checks if the file is an ELF file.
 * @e_idn: pointer to an array that contains the ELF magic numbers
 */

void check_is_elf(unsigned char *e_idn)
{
	{
		int i;

		for (i = 0; i < 4; i++)
		{
			if (e_idn[i] != 127 &&
					e_idn[i] != 'E' &&
					e_idn[i] != 'L' &&
					e_idn[i] != 'F')
			{
				dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
				exit(98);
			}
		}
	}

}
/**
 * print_magic - Prints the magic of the ELF.
 * @e_idn: A pointer to an array that contains the ELF class.
 */
void print_magic(unsigned char *e_idn)
{

	{
		int i;

		printf("  ");
		printf("Magic:   ");
		for (i = 0; i < EI_NIDENT; i++)
		{
			printf("%02x", e_idn[i]);
			if (i == EI_NIDENT - 1)
				printf("\n");
			else
				printf(" ");
		}
	}
}
/**
 * print_class - Prints the class of the ELF.
 * @e_idn: A pointer to an array that contains the ELF class.
 */
void print_class(unsigned char *e_idn)
{
	printf("  ");
	printf("Class:                             ");

	switch (e_idn[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASSNONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e_idn[EI_CLASS]);
	}
}
/**
 * print_data - Prints the data of the ELF.
 * @e_idn: A pointer to an array that contains the ELF class.
 */
void print_data(unsigned char *e_idn)
{
	printf("  ");
	printf("Data:                              ");

	switch (e_idn[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e_idn[EI_DATA]);
			break;
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
	ssize_t of_elf, rf_elf;
	char *file_elf;
	Elf64_Ehdr *elf_header;

	if (argc != 2)
	{   dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	file_elf = argv[1];
	of_elf = open(file_elf, O_RDONLY);
	if (of_elf == -1)
	{   dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file_elf);
		exit(98);
	}
	elf_header = malloc(sizeof(Elf64_Ehdr));
	if (elf_header == NULL)
	{   dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file_elf);
		closefile(of_elf);
		exit(98);
	}
	rf_elf  = read(of_elf, elf_header, sizeof(Elf64_Ehdr));
	if (rf_elf == -1)
	{   dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_elf);
		closefile(of_elf);
		free(elf_header);
		exit(98);
	}
	check_is_elf(elf_header->e_ident);
	printf("ELF Header:\n");
	print_magic(elf_header->e_ident);
	print_class(elf_header->e_ident);
	print_data(elf_header->e_ident);
	print_version(elf_header->e_ident);
	print_os_abi(elf_header->e_ident);
	print_abi_version(elf_header->e_ident);
	print_type(elf_header->e_ident, elf_header->e_type);
	print_entry_point_addr(elf_header->e_ident, elf_header->e_entry);
	free(elf_header);
	closefile(of_elf);
	return (0);
}

