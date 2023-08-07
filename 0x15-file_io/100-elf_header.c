#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_magic - Prints the ELF magic numbers.
 * @e_ident: The ELF identification array.
 */
void print_magic(unsigned char e_ident[EI_NIDENT])
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
}

/**
 * print_elf_header - Displays the ELF header information.
 * @header: The ELF header.
 */
void print_elf_header(Elf64_Ehdr header)
{
	printf("ELF Header:\n");
	print_magic(header.e_ident);
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
	case ELFCLASSNONE: printf("No ELF class\n"); break;
	case ELFCLASS32:   printf("ELF32\n");       break;
	case ELFCLASS64:   printf("ELF64\n");       break;
	default:           printf("<unknown>\n");  break;
	}
	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
	case ELFDATANONE: printf("Unknown data format\n"); break;
	case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
	case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
	default:          printf("<unknown>\n"); break;
	}
	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:     printf("UNIX - System V\n"); break;
	case ELFOSABI_NETBSD:   printf("UNIX - NetBSD\n");   break;
	case ELFOSABI_SOLARIS:  printf("UNIX - Solaris\n");  break;
	default:                printf("<unknown: %d>\n", header.e_ident[EI_OSABI]); break;
	}
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header.e_type)
	{
	case ET_NONE:   printf("No file type\n");   break;
	case ET_REL:    printf("REL (Relocatable file)\n"); break;
	case ET_EXEC:   printf("EXEC (Executable file)\n"); break;
	case ET_DYN:    printf("DYN (Shared object file)\n"); break;
	case ET_CORE:   printf("CORE (Core file)\n"); break;
	default:        printf("<unknown>\n"); break;
	}
	printf("  Entry point address:               0x%lx\n", header.e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open %s\n", argv[1]);
		exit(98);
	}

	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	print_elf_header(header);

	close(fd);
	return (0);
}
