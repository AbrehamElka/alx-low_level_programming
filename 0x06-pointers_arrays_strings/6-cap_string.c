#include "main.h"

char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i + 1] == ' ')
		{
			n[i + 2] = n[i + 2] -32;
			n = n + 2;
			continue;
		}
	}

	return (n);
}
