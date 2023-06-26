#include "main.h"
/**
 * puts_half - function print half of the string
 * @str: string to print passed as parameter
 * Return: void
 */
void puts_half(char *str)
{
	int str_len = 0;
	int i = 0;

	while (str[str_len])
		str_len++;

	i = (str_len % 2 == 0) ? str_len / 2 : (str_len + 1) / 2;

	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}
