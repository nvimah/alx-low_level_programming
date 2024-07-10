#include "main.h"

/**
 * factorial(int n) - returns the factorial of a number
 * n - the number
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return  n * factorial(n - 1);
}
