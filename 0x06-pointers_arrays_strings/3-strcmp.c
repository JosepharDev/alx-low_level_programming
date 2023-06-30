#include "main.h"
/**
 * _strcmp - function to compare two string
 * @s1: first string
 * @s2: second string
 * Return: the difference between two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s2[i] == s1[i])
		i++;
	return (s2[i] - s1[i]);
}
