#include "shell.h"

/**
 *
 *
 *
 *
 **/

/*ls*/
int execute_func(char **argv, char **arguments, int index)
{
	int flag;
	pid_t pid;
	char *new_argument;

	new_argument = _get_path(arguments[0]);
	if (new_argument == NULL)
	{
		print_error(arguments[0], argv[0], index);

		free_2D(arguments);
		return (127);
	}
	pid = fork();
	if (pid == 0)
	{
		if (execve(new_argument, arguments, environ) == - 1)
		{
			free_2D(arguments);
			free(new_argument), new_argument = NULL;
		}
	}
	else
	{
		waitpid(pid, &flag, 0);
		free_2D(arguments);
		free(new_argument), new_argument = NULL;
	}
	return (WEXITSTATUS(flag));
}
