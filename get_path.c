#include "shell.h"

 
char *_get_path(char *cmd)
{
	char *directory, *command, *getted_env;
	struct stat sta;
	int i = 0;

	while (cmd[i])
	{
		if (cmd[i] == '/')
		{
			if (stat(cmd, &sta) == 0)
				return (_strdup(cmd));
			return (NULL);
		}
		i++;
	}
	getted_env = _get_env("PATH");
	if (getted_env == NULL)
		return (NULL);
	directory = strtok(getted_env, ":");
	
	for (;directory;)
	{

		command = malloc(_strlen(directory) + _strlen(cmd) + 2);
		if (command)
		{
			_strcopy(command, directory);
			_strcat(command, "/");
			_strcat(command, cmd);

			if(stat(command, &sta) == 0)
			{
				free(getted_env);
				return (command);
			}
			free(command), command = NULL;
			directory = strtok(NULL, ":");
		}
	}
	free(getted_env);
	return (NULL);
}

