#include <stdio.h>
/**
 * main - Start point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	a = 'a';
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
