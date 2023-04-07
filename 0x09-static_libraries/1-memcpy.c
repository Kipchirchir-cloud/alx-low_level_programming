#include "main.h"
/**
 *_memcpy - function
 *@dest: stored memory
 *@src: copied memory
 *@n: no of bytes
 *
 *Return: memory copied
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

