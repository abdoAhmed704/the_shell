#include "shell.h"

/**
 *
 *
 *
 *
 **/

char *get_line(void)
{
	size_t num, length = 0;
	char *lline = NULL;

	num = getline(&lline, &length, stdin);
	
	if (num < 0)
		return (NULL);

	return (lline);

}
