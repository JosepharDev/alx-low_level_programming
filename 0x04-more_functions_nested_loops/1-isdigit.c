#include "main.h"
/**
 * _isdigit - function to check in character in digit or not
 * @c: character passed as parameter to check
 * Return: 1 if character is digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
