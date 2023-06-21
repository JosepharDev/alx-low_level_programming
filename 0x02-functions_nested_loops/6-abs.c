#include "main.h"
/**
 * _abs - function return absolute value of an integer
 *
 * @a: number passed as parameter
 *
 * Return: absolute value of a
 */
int _abs(int a)
{
	if (a < 0)
		return (a * (-1));
	return  (a);
}
