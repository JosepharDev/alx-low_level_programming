#include "main.h"
/**
 * puts_half - function print half of the string
 * @str: string to print passed as parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int len;

	while (str[i])
		i++;
	len = i - 1;
	if (len % 2 == 0)
	{
		i = 0;
		while (str[i] && i < len / 2)
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	else
	{
		i = (len / 2) + 1;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
