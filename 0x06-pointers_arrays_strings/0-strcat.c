#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input the value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int g;
	int j;

        g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		g++;
		j++;
	}

	dest[g] = '\0';
	return (dest);
}

