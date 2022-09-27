#include <stdio.h>
/**
* main - prints fizz, buzz, and fizzbuzz at certain points during loop
*
*
*Return: always zero
*
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{	
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else
		{
			printf("%d ", i);
		}
		if (i == 100)
			printf("\n");
	}
	return (0);
}
