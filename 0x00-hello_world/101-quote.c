#include <stdio.h>
#include <string.h>
/**
 * Documentation for function to write without using printf or puts
 * 
 * main - include the fwrite function
 *
 * return is 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
