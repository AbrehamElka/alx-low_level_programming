#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i, sum;
	char *endptr;

	sum = 0;
	if (argc <= 1)
		return (0);
	for (i = 0; i < argc; i++)
	{
		sum = sum + strtol(argv[i], &endptr, 10);
		if (endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
