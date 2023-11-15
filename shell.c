#include "shell.h"

/**
 * main - programs' entry point
 * @ac: argument count
 * @argv: arguement vector in the array
 * Return: void
 */
int main(int ac, char **argv)
{
	char *k = NULL;
	char **cmd = NULL;
	int cond;
	void ac, argv;

	for (;;)
	{
		k = read_line();
		cmd = tokenizer(k);
		cond = _execute(cmd, argv);
	}
	return (0);
}
