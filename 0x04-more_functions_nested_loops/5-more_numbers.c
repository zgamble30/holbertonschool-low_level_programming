#include "main.h"
/**
*more_numbers - prints 10 times 0-14 to console
*
*
*/

void more_numbers(void)
{
	int i;
	int j;
	int first;
	int last;

	for (i = 0; i < 10; i++)
	{
		last = j;
		if (j >= 10)
		{
			first = 1;
			last = last % 10;
			_putchar(first + '0');
		}
		_putchar(last + '0');
	}
	_putchar('\n');
}
