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
	char alf[26] = "0123456789abcdef";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		if (i != 4 && i != 17)
		{
			putchar(alf[i]);
		}
	}
	putchar('\n');
	return (0);
}
