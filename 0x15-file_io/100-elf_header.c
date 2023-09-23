#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void entry(unsigned long int e_entry, unsigned char *e_ident);
void type(unsigned int e_type, unsigned char *e_ident);
void close_elf(int elf);
void checkelf(unsigned char *e_ident);
void magic(unsigned char *e_ident);
void abi_v(unsigned char *e_ident);
void class(unsigned char *e_ident);
void data(unsigned char *e_ident);
void os_abi(unsigned char *e_ident);
void version(unsigned char *e_ident);


/**
 * main - Entry point
 * @argc: argument count which is unused
 * @argv: argument vector
 * Return: 0
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	Elf64_Ehdr *header;
	int i, j;

	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to read %s file\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(i);
		dprintf(STDERR_FILENO, "Error: Unable to read %s file\n", argv[1]);
		exit(98);
	}
	j = read(i, header, sizeof(Elf64_Ehdr));
	if (j == -1)
	{
		free(header);
		close_elf(i);
		dprintf(STDERR_FILENO, "Error: File does not exist %s\n", argv[1]);
		exit(98);
	}
	checkelf(header->e_ident);
	printf("ELF Header: \n");
	magic(header->e_ident);
	class(header->e_ident);
	data(header->e_ident);
	version(header->e_ident);
	os_abi(header->e_ident);
	abi_v(header->e_ident);
	type(header->e_type, header->e_ident);
	entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(i);
	return (0);
}

/**
 * close_elf - closes the elf file
 * @elf: elf file descriptor
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close %d\n", elf);
		exit(98);
	}
}

/**
 * checkelf - checking for an ELF file
 * @e_ident: a pointer to an array
 */
void checkelf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' &&
		e_ident[i] != 'L' && e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: This is not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic - prints magic numbers
 * @e_ident: a pointer containing magic numbers of ELF
 */
void magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * abi_v - printing the ABI version
 * @e_ident: pointer to an array with ABI version
 */
void abi_v(unsigned char *e_ident)
{
	printf("  ABI Version:          %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * class - prints the class
 * @e_ident: pointer containing class
 */
void class(unsigned char *e_ident)
{
	printf(" Class: ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASSNONE:
			printf("NONE\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * data - data of ELF header
 * @e_ident: pointer
 */
void data(unsigned char *e_ident)
{
	printf(" Data: ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * version - prints versions of ELF header
 * @e_ident: pointer to an array
 */
void version(unsigned char *e_ident)
{
	printf(" Version: %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * os_abi - prints OS/ABI
 * @e_ident: pointer of an array
 */
void os_abi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * type - prints the type of an ELF file
 * @e_type: ELF type
 * @e_ident: pointer
 */
void type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry - printing entry point
 * @e_entry: entry point address
 * @e_ident: pointer
 */
void entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0XFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
		printf("%#lx\n", e_entry);
}
