#include <stdio.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void close_elf(int elf);
void checker(unsigned char *e_ident);
void p_magic(unsigned char *e_ident);
void p_class(unsigned char *e_ident);
void p_data(unsigned char *e_ident);
void p_version(unsigned char *e_ident);
void p_osabi(unsigned char *e_ident);
void p_abi(unsigned char *e_ident);
void p_type(unsigned int e_type, unsigned char *e_ident);
void p_entry(unsigned long int e_entry, unsigned char *e_ident);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: an integer
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	Elf64_Ehdr *head;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, head, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(head);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: %s: No such file\n", argv[1]);
		exit(98);
	}

	checker(head->e_ident);
	printf("ELF Header:\n");
	p_magic(head->e_ident);
	p_class(head->e_ident);
	p_data(head->e_ident);
	p_version(head->e_ident);
	p_osabi(head->e_ident);
	p_abi(head->e_ident);
	p_type(head->e_type, head->e_ident);
	p_entry(head->e_entry, head->e_ident);
	free(head);
	close_elf(o);
	return (0);
}

/**
 * close_elf - closing an elf file
 * @elf: elf file
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * checker - checks for an elf file
 * @e_ident: a pointer to an array of elf files
 */
void checker(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		e_ident[i] != 'E' &&
		e_ident[i] != 'L' &&
		e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * p_magic - printing the magic number of an elf file
 * @e_ident: a pointer to an array of elf files
 */
void p_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:    ");
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
 * p_class - printing the class of the elf file
 * @e_ident: a pointer to an array of elf files
 */
void p_class(unsigned char *e_ident)
{
	printf("  Class:                              ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * p_data - printing the data of the elf header
 * @e_ident: a pointer to an array of elf files
 */
void p_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

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
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * p_version - printing the version of the elf file
 * @e_ident: a pointer to an array of elf files
 */
void p_version(unsigned char *e_ident)
{
	printf("  Version:                              %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * p_osabi - printing the OS/ABI of the elf file
 * @e_ident: a pointer to an array of elf files
 */
void p_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                              ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
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
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * p_abi - printing the ABI version of the elf file
 * @e_ident: a pointer to an array of elf files
 */
void p_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                              %d\n",
	e_ident[EI_ABIVERSION]);
}

/**
 * p_type - printing the type of the elf file
 * @e_type: the elf type
 * @e_ident: a pointer to an array of elf files
 */
void p_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:                              ");

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
 * p_entry - printing the entry point of the elf file
 * @e_entry: the address of the entry point
 * @e_ident: a pointer to an array of elf files
 */
void p_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:                              ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0XFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}
