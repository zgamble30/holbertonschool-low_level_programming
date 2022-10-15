#include "main.h"
/**
*_isdigit - checks to see if parameter is a digit
*@c: paramater to check to see if it is a digit
*
*Return: 1 if it is a digit
*
*/

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == (i + '0'))
			return (1);
	}
	return (0);
}
