#include "shell.h"

/**
 *
 *
 *
 *
 **/

char *get_line(void)
{
	ssize_t num;
       	size_t length = 0;
	char *lline = NULL;

	num = getline(&lline, &length, stdin);
	
	if (num == -1)
	{	
		free(lline);
		return (NULL);
	}
	return (lline);

}
