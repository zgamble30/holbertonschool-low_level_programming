#include<stdio.h>
/**
 * main - prints numbers 0-9 only using putchar function
 *
 *
 * Return:0 if runs successfuly
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
