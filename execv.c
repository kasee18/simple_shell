#include "shell.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * execute_command - a function that executes files
 * @cmd: argument
 * Return: void
 */

void execute_command(const char *command)
{
	char command[] = {"/bin/ls", "-1", NULL};
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		if (execve(command[0], command, == NULL) == -1)
		{
		perror("execve");
		exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
	return (0);
}
