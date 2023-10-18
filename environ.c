#include "shell.h"

char *_get_env(char *name)
{
    int i = 0;
    char *token, *str, *line, *value;
    while (environ[i])
	{
		line = _strdup(environ[i]);
		token = strtok(line, "=");
			if(_strcmp(token, name) == 0)
			{	
				str = strtok(NULL, "\n");
				value = _strdup(str);
				free(line);
				return(value);
			}
			free(line), line = NULL;
		i++;
	}
    return (NULL);
}

