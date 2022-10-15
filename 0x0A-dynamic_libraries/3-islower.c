#include "main.h"
/**
 * _islower - checks to see if the input char is lowercase
 * @c: the character to check if lowercase
 *
 * Return: 1 if lowercase and - otherwise
 *
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
