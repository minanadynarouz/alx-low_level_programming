#ifndef MAIN_H
#define MAIN_H

#define SPACE 35

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdint.h>
#include <string.h>

int _putchar(char c);
int _strlen(char *s);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_space(int n);
void elf_validation(Elf64_Ehdr buffer);
void p_magic_num(Elf64_Ehdr buffer);
void p_class(uint8_t e_ident_class);
void p_data(uint8_t e_ident_data);
void p_version(uint32_t e_version);
void p_osabi(uint8_t e_ident_osabi);
void p_abiVersion(uint32_t e_ident_abiversion);
void p_type(uint32_t e_type);
void p_entry(unsigned int e_entry, unsigned char *e_ident);
unsigned int lit_to_big_endian(unsigned int x);

#endif
