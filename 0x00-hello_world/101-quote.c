#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	int i;
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	return (1);
}
