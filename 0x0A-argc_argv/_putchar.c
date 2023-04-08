#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character
 * @c:character
 *
 * Return: On success 1.
 * On error , return -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

