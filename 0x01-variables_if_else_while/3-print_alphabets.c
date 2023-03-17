#include <stdio.h>

/**
 * main - Prints the
 *
 * Return: Always 0 (Sucess)
 **/
int main(void)
{
	char alf[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0 ; i < 52 ; i++)
	{
		putchar(alf[i]);
	}
	putchar('\n');
	return (0);
}
