#include "shell.h"

/**
 *
 *
 *
 *
 **/

int execute_func(char **argv, char **arguments)
{
	int flag;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		if (execve(arguments[0], arguments, environ) == - 1)
		{
			free_2D(arguments);
			perror(argv[0]);
			exit(99);
		}
	}
	else
	{
		waitpid(pid, &flag, 0);
		free_2D(arguments);
	}
	return (WEXITSTATUS(flag));
}
