#include <stdio.h>
#include "main.h"

/**
 * main - p the name of the program
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

