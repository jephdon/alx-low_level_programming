#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @ptr: pointer to string
 *
 * Return: ptr
 */
char *rot13(char *ptr)
{
	int i, j;
	char Az[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char Nm[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; Az[j] != '\0'; j++)
		{
			if (ptr[i] == Az[j])
			{
				ptr[i] = Nm[j];
				break;
			}
		}
	}
	return (ptr);
}
