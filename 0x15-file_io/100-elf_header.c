#include "main.h"

/**
 *main - print content of elf header file.
 *@argc: argument count
 *@argv: argument vector
 *Return:0 - success
 */

int main(int argc, char *argv[])
{
	FILE *elf_file;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Wrong usage, "
				"insert 1 arg only after program %s\n", argv[0]);
		exit(98);
	}

	elf_file = fopen(argv[1], "rb");

	if (!elf_file)
	{
		fprintf(stderr, "Wrong usage, error occurred while trying to open the ELF file %s.\n"
                "Make sure the inserted file is an ELF File.\n", argv[0]);
		exit(98);
	}


	if (fread(&elf_header, sizeof(elf_header), 1, elf_file) != 1)
	{
		fprintf(stderr, "Failed to read ELF header from file: %s\n", argv[1]);
		fclose(elf_file);
		exit(98);
	}

	elf_validation(elf_header);
	p_magic_num(elf_header);
	p_class(elf_header.e_ident[EI_CLASS]);
	p_data(elf_header.e_ident[EI_DATA]);
	p_version(elf_header.e_version);
	p_osabi(elf_header.e_ident[EI_OSABI]);
	p_abiVersion(elf_header.e_ident[EI_ABIVERSION]);
	p_type(elf_header.e_type);
	p_entry(elf_header.e_entry);
	fclose(elf_file);
	return (0);
}

/**
 *elf_validation - validates if file in ELF format.
 *@buffer: file itself.
 */

void elf_validation(Elf64_Ehdr buffer)
{
	if (buffer.e_ident[0] == 0x7f && 
		buffer.e_ident[1] == 'E' && 
		buffer.e_ident[2] == 'L' && 
		buffer.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: File is not an ELF\n");
		exit(98);
	}
}

/**
 * print_space - used to sort the indentation.
 * @n: var to calculate space.
 */

void print_space(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(" ");
	}
}

/**
 *p_magic_num - prints an elf's magic no.
 *@buffer: ELF File.
 */

void p_magic_num(Elf64_Ehdr buffer)
{
	int i;

	i = 0;
	print_space(2);
	printf("Magic:");
	print_space(3);

	while (i <= 15)
	{
		if (i == 15)
		{
			printf("%02x", buffer.e_ident[i]);
			printf("\n");
			return;
		}
		printf("%02x ", buffer.e_ident[i]);
		i++;
	}
}

/**
 *p_class - prints an elf's class.
 *@e_ident_class: class in ELF file.
 */

void p_class(uint8_t e_ident_class)
{
	char *stringWord;
	int deductLen;

	print_space(2);
	stringWord = "Class:";
	deductLen = strlen(stringWord);

	printf("%s", stringWord);
	print_space(SPACE - deductLen);
	switch (e_ident_class)
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("This class is invalid.\n");
	}
}

/**
 *p_data - prints an elf's data.
 *@e_ident_data: data in ELF file.
 */

void p_data(uint8_t e_ident_data)
{
	char *stringWord;
	int deductLen;

	print_space(2);
	stringWord = "Data:";
	deductLen = strlen(stringWord);

	printf("%s", stringWord);
	print_space(SPACE - deductLen);
	switch (e_ident_data)
	{
		case ELFDATA2LSB:
			printf("Two's complement, little-endian.\n");
			break;
		case ELFDATA2MSB:
			printf("Two's complement, big-endian.\n");
			break;
		default:
			printf("Unknown data format.\n");
	}
}

/**
 *p_version - prints an elf's version
 *@e_version: Version in Elf File.
 */

void p_version(uint32_t e_version)
{
	char *stringWord;
	int deductLen;

	print_space(2);
	stringWord = "Version:";
	deductLen = strlen(stringWord);

	printf("%s", stringWord);
	print_space(SPACE - deductLen);

	printf("%u (current)\n", e_version);
}

/**
 * p_osabi -  prints an elfs osabi.
 * @e_ident_osabi: OS/ABI in Elf file.
 */

void p_osabi(uint8_t e_ident_osabi)
{
	char *stringWord;
	int deductLen;

	print_space(2);
	stringWord = "OS/ABI:";
	deductLen = strlen(stringWord);

	printf("%s", stringWord);
	print_space(SPACE - deductLen);
	switch (e_ident_osabi)
	{
		case ELFOSABI_SYSV:
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
			printf("Stand-alone App\n");
			break;
		default:
			printf("Unknown\n");
	}
}

/**
 * p_abiVersion - print ABI version.
 * @e_ident_abiversion: ABI.
 */

void p_abiVersion(uint32_t e_ident_abiversion)
{
	char *stringWord;
	int deductLen;
	
	print_space(2);
	stringWord = "ABI Version:";
	deductLen = strlen(stringWord);

	printf("%s", stringWord);
	print_space(SPACE - deductLen);

	printf("%i\n", e_ident_abiversion);
}

/**
 * p_type - print type in ELF.
 * @e_type: status ELF header.
 */

void p_type(uint32_t e_type)
{
	char *stringWord;
	int deductLen;

	print_space(2);
	stringWord = "Type:";
	deductLen = strlen(stringWord);

	printf("%s", stringWord);
	print_space(SPACE - deductLen);

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (A relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (An executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (A shared object)\n");
			break;
		case ET_CORE:
			printf("CORE (A core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * p_entry - print entry address of ELF.
 * @e_entry: is property of ELF header.
 */

void p_entry(unsigned int e_entry)
{
	char *stringWord;
	int deductLen;
	
	print_space(2);
	stringWord = "Entry point address:";
	deductLen = strlen(stringWord);

	printf("%s", stringWord);
	print_space(SPACE - deductLen);

	printf("%#x\n", (unsigned int)e_entry);
}
