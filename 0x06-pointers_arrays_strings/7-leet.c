#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet) speak.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *s)
{
	char leet_letters[] = "AEOTL";
	char leet_numbers[] = "43071";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; leet_letters[j]; j++)
		{
			if (s[i] == leet_letters[j] || s[i] == (leet_letters[j] + 32))
			{
				s[i] = leet_numbers[j];
				break;
			}
		}
	}
	return (s);
}
