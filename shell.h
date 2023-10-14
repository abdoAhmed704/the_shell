#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>


extern char **environ;

char *get_line(void);
char **tokener(char *lline);
int execute_func (char **argv, char **arguments);

/*string.h function*/
char *_strcopy(char *dest, char *src);
char *_strdup(const char *str);

/*freeing*/
void free_two(char **free_1, char **free_2);
void free_2D(char **array);


#endif
