#include "main.h"

int is_prime_helper(int n, int divisor);
/**
 * is_prime_number(int n) - returns 1 if the input is prime
 * n - the input number
 */

int is_prime_number(int n)
{
	return is_prime_helper(n, n / 2);
}

int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return 0;
	}
	if (divisor == 1)
	{
		return 1;
	}
	if ( n % divisor == 0)
	{
		return 0;
	}
	return is_prime_helper(n, divisor - 1);
}
