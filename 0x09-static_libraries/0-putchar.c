#include <unistd.h>


/**
 * _putchar - character stdout
 * @c: character
 *
 * Return:  1 (Success)
 * On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

