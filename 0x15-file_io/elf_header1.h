#ifndef ELF_H1
#define ELF_H1
#include "elf_header1.h"
#include "main.h"


/**
 * print_version - Prints the version of the ELF.
 * @e_idn: A pointer to an array that contains the ELF class.
 */
void print_version(unsigned char *e_idn)
{
	printf("  ");
	printf("Version:                           ");
	switch (e_idn[EI_VERSION])
	{
		case EV_CURRENT:
			printf("1 (current)\n");
			break;
		default:
			printf("unknown\n");
			break;
	}
}
/**
 * print_os_abi - Prints the OS/ABI of the ELF.
 * @e_idn: A pointer to an array that contains the ELF class.
 */
void print_os_abi(unsigned char *e_idn)
{
	printf("  OS/ABI:                            ");

	switch (e_idn[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_idn[EI_OSABI]);
	}
}
/**
 * print_abi_version - Prints the ABI/VERSION of the ELF.
 * @e_idn: A pointer to an array that contains the ELF class.
 */
void print_abi_version(unsigned char *e_idn)
{
	printf("  ");
	printf("ABI Version:                       ");
	switch (e_idn[EI_ABIVERSION])
	{
		case 0:
			printf("0\n");
			break;
		case 1:
			printf("1\n");
			break;
		default:
			printf("<unknown: %x>\n", e_idn[EI_ABIVERSION]);
			break;

	}
}


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


#endif /* ELF_H1 */
