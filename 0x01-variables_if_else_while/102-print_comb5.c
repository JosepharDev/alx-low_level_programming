#include <stdio.h>
/**
 * main - start point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = a + 1;

	while (a < 99)
	{
		putchar((a / 10) + 48);
		putchar((a % 10) + 48);
		putchar(' ');
		putchar((b / 10) + 48);
		putchar((b % 10) + 48);
		if (a < 98)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
		if (b >= 100)
		{
			a++;
			b = a + 1;
		}
	}
	putchar('\n');
	return (0);
}
