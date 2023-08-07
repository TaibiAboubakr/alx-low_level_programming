#ifndef ELF_H
#define ELF_H
#include "main.h"

void check_is_elf(unsigned char *e_idn);
void print_magic(unsigned char *e_idn);
void print_class(unsigned char *e_idn);
void print_data(unsigned char *e_idn);
void print_version(unsigned char *e_idn);
void print_os_abi(unsigned char *e_idn);
void print_abi_version(unsigned char *e_idn);
void print_type(unsigned char *e_idn, unsigned int);
void print_entry_point_addr(unsigned char *e_idn, unsigned long int);


/**
 * print_type - Prints the entry point .
 * @e_type: The type.
 * @e_idn: A pointer to an array that contains the ELF class.
 */
void print_type(unsigned char *e_idn, unsigned int e_type)
{
if (e_idn[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;
	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;

	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}
/**
 * print_entry_point_addr - Prints the entry point .
 * @entry: The address.
 * @e_idn: A pointer to an array that contains the ELF class.
 */
void print_entry_point_addr(unsigned char *e_idn, unsigned long int entry)
{
printf("  ");
printf("Entry point address:               ");

	if (e_idn[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (e_idn[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

#endif /* ELF_H */
