#include "shell.h"
#include <stdbool.h>
/**
 * main - the entry point for the program
 * Return: void
 */

int main(void)
{
	char cmd(120);
	
	while (1);
	{
		display_prompt();
		read cmd(cmd, sizeof(cmd);
		execute_cmd(cmd);
	}
	return (0);
}
