#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * kasee_print - a function that prints a string
 * @str: string to be printed
 */
void kasee_print(const char *str);
/**
 * display_prompt - a function that displays shell promt
 */
void display_prompt(void);
/**
 * real_cmd - a funct that reads a command from the user
 * @cmd: buffer to store command
 * @size: buffer size
 */
void real_cmd(char *cmd, size_t size);
/**
 * execute_command -executes a command in shell
 * @command: command to be executed
 */
void execute_command(const char *command);
int main(int ac, char **argv);
int main(void);

#endif
