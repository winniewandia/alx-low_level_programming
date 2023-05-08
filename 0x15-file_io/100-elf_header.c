#include "main.h"

/**
 * print_error - prints error
 * @message: Message to be printed
 */
void print_error(char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file
 * @argc: No of arguments
 * @argv: Arguments list
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int fd, i;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		print_error("Failed to open file");
	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Failed to read ELF header");
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\nClass:                             %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d\n",
			header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n",
			header.e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n",
			header.e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", header.e_type);
	printf("Entry point address:               0x%lx\n", header.e_entry);
	printf("Format:                            ELF%d-%s\n",
			header.e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64,
			header.e_ident[EI_DATA] == ELFDATA2LSB ? "little endian" : "big endian");
	close(fd);
	return (-1);
}

