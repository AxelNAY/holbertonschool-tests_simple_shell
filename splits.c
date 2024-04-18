#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac __attribute__((unused)), char **av)
{
	char *str1, *str2, *token, *subtoken;
	char *saveptr1, *saveptr2;
	int j;

	for (j = 1, str1 = av[1]; ; j++, str1 = NULL)
	{
		token = strtok_r(str1, av[2], &saveptr1);
		if (token == NULL)
			break;
		printf("%d: %s\n", j, token);

		for (str2 = token; ; str2 = NULL)
		{
			subtoken = strtok_r(str2, av[3], &saveptr2);
			if (subtoken == NULL)
				break;
			printf("\t --> %s\n", subtoken);
		}
	}

	exit(EXIT_SUCCESS);
}
