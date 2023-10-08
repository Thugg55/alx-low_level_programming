#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of argument
 * @argv: prints array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
