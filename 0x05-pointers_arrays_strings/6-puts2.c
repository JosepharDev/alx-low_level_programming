#include "main.h"
/**
 * puts2 - function print character and ignore one
 * @str: string passed as parameter
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			write(1, &str[i], 1);
			i++;
		}
		else
			i++;
	}
	write(1, "\n", 1);
}
