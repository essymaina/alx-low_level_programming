#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string.
 * @s: The string to be counted by the function.
 *
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
