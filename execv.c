#include "shell.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * execute_cmd - a function that executes files
 * @cmd: argument
 * Return: void
 */

void execute_cmd(const char *cmd)
{
	char *cmd[] = {"/bin/ls", "-1", NULL};
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		if execve(cmd[0], cmd, == NULL)
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
	return (0);
}
