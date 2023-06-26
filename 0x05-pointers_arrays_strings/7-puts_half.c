#include "main.h"
/**
 * puts_half - function print half of the string
 * @str: string to print passed as parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int length = 0;
	int half_length = length / 2;

	while (str[length])
		length++;
	if (length % 2 == 1)
	{
		write(STDOUT_FILENO, &str[half_length], length - half_length);
	}
	else
	{
		str[half_length] = '\0';
		write(STDOUT_FILENO, str, half_length);
	}
}
