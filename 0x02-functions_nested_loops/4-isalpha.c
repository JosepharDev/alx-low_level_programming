#include "main.h"
/**
 * _isalpha - function to check character if is alphabet
 *
 * @c: character to check passed as parameter
 *
 *  Return: 1 if character is alphabet else 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}
