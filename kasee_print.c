#include "shell.h"

/**
 * kasee_print - this is a own print function
 * @str: string pointer
 * Return: void
 */
void kasee_print(const char *str)
{
	write(STDOUT_FILENO, STR, strlen(str));
}
