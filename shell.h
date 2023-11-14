#ifndef SHELL_H
#define SHELL_H

/**
 * Below are the function headers
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * The prototypes for all the functions in the project
 * kasee_print - a function that enables the user to print
 * display_prompt - this function displays a prompt
 */

void kasee_print(const char *str);
void display_prompt(void);

#endif
