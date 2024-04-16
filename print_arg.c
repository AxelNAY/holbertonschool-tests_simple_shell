#include <stdio.h>
#include <unistd.h>

/**
 * main - Print all the arguments without ac.
 * @ac: number of items in av.
 * @av: a NULL terminated array of strings.
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	char **arg = av;
	arg++;

	while (*arg != NULL)
	{
		printf("%s", *arg);
		arg++;
		if (*arg != NULL)
			printf(", ");
	}
	printf("\n");

	return (0);
}
