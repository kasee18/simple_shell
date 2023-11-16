#include <stdio.h>
#include <string.h>
/**
 * main - function entry point
 * Return: void
 */

int main(void)
{
	char str[] = "The sample string";
	const char delimiters[] = ",.";

	char *token;
	char *rest = str;

	while ((token = strsep(&rest, delimiters)) != NULL)
	{
		if (*token != '\0')
		{
			kasee_print("Token: %s\n", token);
		}
	}
	return (void);
}
