#include "main.h"
/**
 * main - Start point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *str = "_putchar\n";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (0);
}
