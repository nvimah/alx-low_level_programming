#include <unistd.h>
/**
 * main - 6-size.c
 *description - Write a C program that prints.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		printf("Size of a char: %zu byte(s)\n", sizeof(char));
		printf("Size of a int: %zu byte(s)\n", sizeof(int));
		printf("Size of a long: %zu byte(s)\n", sizeof(long));
		printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
		printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
