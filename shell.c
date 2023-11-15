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
	(void) ac;
	(void) argv;

	for (;;)
	{
		k = read_line();
		if (k == NULL)/*on reaching EOF ctr + D*/
		{
			if (isatty(STDIN_FILENO))
				write(1, "\n" 1);
			return (cond);
		}
		free(k);
		cmd = tokenizer(k);
	}
}
