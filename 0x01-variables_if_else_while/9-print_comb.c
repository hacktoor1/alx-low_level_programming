#include <stdio.h>

/**
 * main - prints numbers form 0 of 9 whit (,).
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;

	for (n = 48 ; n < 58 ; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
