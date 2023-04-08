#include <stdio.h>
#include "main.h"

/**
 * main - program name
 * @argc: number
 * @argv: array of arguments 
 *
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

