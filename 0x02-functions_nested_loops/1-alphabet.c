#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase
 *
 * Return: Always  0 (Sucsses).
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
