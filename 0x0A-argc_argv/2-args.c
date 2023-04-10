#include <stdio.h>

/**
 * main - prints the number of the program's passed arguments
 * @argc : int
 * @argv : list
 * Return : 0
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
