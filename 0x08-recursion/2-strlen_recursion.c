#include "main.h"
/**
 * _strlen_recursion - function to count the len in recursion
 * @s: to string to count his len
 * Return: number of the lenght
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s++));
}
