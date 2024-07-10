#include "main.h"

/**
 *  _strlen_recursion(char *s) - Returns the length of a string
 *  @s: The string
 */
int  _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	return 1 + _strlen_recursion(s + 1);
}
