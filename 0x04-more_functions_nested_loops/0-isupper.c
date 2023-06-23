#include "main.h"
/**
 * _isupper - function to check is character uppercase or not
 * @c: character passed as parameter to check
 * Return: 1 if true and 0 if not
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 'Z')
		return (1);
	return (0);
}
