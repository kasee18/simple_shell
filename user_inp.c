#include "shell.h"
/**
 * read_cmd - a function that reads argument in a function
 * @cmd: pointer
 * @size: arguments in the function
 * Return: void
 */

void read_cmd(char *cmd, size_t size)
{
	if (fgets(cmd, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			kasee_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
		kasee_print("Error while reading input.\n");
		exit(EXIT_FAILURE);
		}
	}
	cmd[strcspn(cmd, "\n")] = '\0';
}
