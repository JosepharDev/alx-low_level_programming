#include <stdio.h>
/**
 * main - Start point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int x = '1';

	while (a <= '9')
	{
		b = x;
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a != '8')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		x++;
		a++;
	}
	putchar('\n');
	return (0);
}
