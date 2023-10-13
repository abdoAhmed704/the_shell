#include "shell.h"
/**
 *
 * main - ENTRY POINT
 *
 * @ac: the number of argument
 * @av: the arguments
 *
 * Return: 0 always
 **/
int main(int ac, char **av)
{
	char *getted_line = NULL, **arguments;
	int i = 0;
	(void) ac;
	(void) av;

	while (1)
	{	
		if(isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		getted_line = get_line();
		if (getted_line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(1, "\n", 1);
			return (0);
		}
		arguments = tokener(getted_line);
		if (!arguments)
			continue;
		for (i = 0; arguments[i]; i++)
		{
			printf("%s\n", arguments[i]);
			free(arguments[i]),  arguments[i] = NULL;
		}
		free(arguments), arguments = NULL;
	}
	return (0);

}
