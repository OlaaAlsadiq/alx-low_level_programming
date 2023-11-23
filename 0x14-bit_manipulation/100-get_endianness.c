#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if b endian, 1 if l endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
