#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 *Return: 0 if successful
 *
 */
int print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
