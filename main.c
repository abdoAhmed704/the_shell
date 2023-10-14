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
	int flag = 0;
	(void) ac;

	while (1)
	{	
		if(isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		getted_line = get_line();
		if (getted_line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(1, "\n", 1);
			return (flag);
		}
		arguments = tokener(getted_line);
		if (!arguments)
			continue;
		flag = execute_func(av, arguments);
	}
}
