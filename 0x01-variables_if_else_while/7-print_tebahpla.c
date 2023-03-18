#include <stdio.h>

/**
 * main - Prints the
 *
 * Return: Always 0 (Sucess)
 **/
int main(void)
{
	char alf[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(alf[i]);
	}
	putchar('\n');
	return (0);
}
