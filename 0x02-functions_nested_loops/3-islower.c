#include "main.h"
/**
 * islower - check alphabet is lowercase or uppercase
 *
 *@c: the character to check if lowercase or not
 *
 * Return: 1 if lowercase or 0 in uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
