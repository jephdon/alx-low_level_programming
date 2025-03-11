#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 1, add = 0;

	while (i < argc)
	{
		if (atoi(argv[i]) <= 0 || atoi(argv[i]) >= 0)
		{
			add += atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", add);
	return (0);
}
