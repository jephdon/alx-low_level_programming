#include "main.h"

/**
 * cap_string - Capitalizes all words
 * @a: parameter
 *
 * Return: result
 */
char *cap_string(char *a)
{
	char *s = ",;.!?\"(){} \n\t";
	int i = 0;

	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] -= 32;
	while (a[i] != '\0')
	{
		int j = 0;

		while (s[j] != '\0')
		{
			if (a[i] == s[j] && a[i + 1] != '\0' && a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
			j++;
		}
		i++;
	}
	return (a);
}
