#include "main.h"

int find_sqrt(int n, int guess);
/**
 * _sqrt_recursion(int n) - returns the natural square root of n
 * n - The number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}
	return find_sqrt(n, 0);
}

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return guess;
	}
	else if (guess * guess > n)
	{
		return -1;
	}
	else
	{
		return find_sqrt(n, guess + 1);
	}
}
