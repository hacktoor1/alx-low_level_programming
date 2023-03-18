#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints rhw alf whitout e and q
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int i;

	for (i = 48 ; i < 48 ; i++)
	{
		putchar(i);
	}
	for (i = 97 ; i < 123 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
