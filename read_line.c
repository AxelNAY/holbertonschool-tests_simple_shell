#include <stdio.h>
#include <unistd.h>

/**
 * main - prints "$ ", wait for the user to enter a command
 * , prints it on the next line.
 * @ac: number of items in av.
 * @av: a NULL terminated array of strings.
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	char **arg = av;
	arg++;
	print ("$ ")
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
