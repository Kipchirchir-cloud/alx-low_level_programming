#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: stores memory
 *@src: copied memory
 *@n: total bytes
 *
 *Return: memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

