#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success), 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i = 1, add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		char *s = argv[i];
		int digit = 0;
		int j = 0;

		if (s[0] == '+')
			j++;
		while (s[j] != '\0')
		{
			if (s[j] >= '0' && s[j] <= '9')
			{
				digit = 1;
				j++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		if (!digit)
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
