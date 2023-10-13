#include "shell.h"
/**
 * tokener - tokenize the arguments
 * 
 * @lline: the line of arguments
 *
 * Return: an array of the arguments
 **/
char **tokener(char *lline)
{
	char *token = NULL, **arguments = NULL, *temp = NULL;
	int counter = 0, index = 0;

	if (lline == NULL)
		return (NULL);
	temp = _strdup(lline);
	token = strtok(temp, " \t\n");
	if (token == NULL) 
	{
		free_two(&lline, &temp);
		return (NULL);
	}
	while (token)
	{
		counter++;
		token = strtok(NULL, " \t\n");
	}
	free(temp), temp = NULL;
	arguments = malloc(sizeof(char *) * (counter + 1));
	if (arguments == NULL)
	{	
		free_two(&lline, &temp);
		return (NULL);
	}
	token = strtok(lline, " \t\n");
	while (token)
	{
		arguments[index++] = _strdup(token);
		token = strtok(NULL, " \t\n");
	}
	arguments[counter] = NULL;
	free_two(&lline, &temp);
	return (arguments);
}
