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

	for (i = 0 ; i < 26 ; i++)
	{
		if (i != 4 && i != 17)
		{
			printf("%d", i);
		}
	}
	putchar('\n');
	return (0);
}
