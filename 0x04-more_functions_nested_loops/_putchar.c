#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 * Retuns: On success 1 else -1
 */

int_putchar(char c)
{
	return(write(1, &c, 1));
}
