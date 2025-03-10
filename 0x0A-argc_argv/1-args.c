#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 1, count = 0;

	while (i < argc)
	{
		count++;
		i++;
	}
	printf("%d\n", count);
	return (0);
}
