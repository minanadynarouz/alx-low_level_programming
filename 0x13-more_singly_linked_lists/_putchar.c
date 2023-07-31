#include "main.h"

/**
 * _putchar - print characters and add line at the end of file
 * @c: char to print
 * Return: number of bites if success or err 1 if error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
