#include "main.h"
/**
 * _memset - fills block with a value
 * @s: address filled
 * @b: value
 * @n: no of bytes changed
 *
 * Return: array changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

