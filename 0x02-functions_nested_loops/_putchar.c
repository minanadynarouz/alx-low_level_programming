#include <unistd.h>

/**
 * Program names _putchar print characters and add line at the end of file
 * It returns number of bites if written with success or err 1 if error occurred
 */

int _putchar (char c)
{
	return write(1, &c, 1);
}
