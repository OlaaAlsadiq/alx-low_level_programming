#include "main.h"
		
/**
 * _isalpha - checks for alphabetic char
 * @c: the chara to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
