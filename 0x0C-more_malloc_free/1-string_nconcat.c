#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int i, j, lens1, lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = strlen(s1);
	lens2 = strlen(s2);
	if (n >= lens2)
		n = lens2;
	newStr = malloc(sizeof(char) * (lens1 + n + 1));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		newStr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		newStr[i + j] = s2[j];
	}
	newStr[i + j] = '\0';
	return (newStr);
}
