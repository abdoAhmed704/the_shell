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
int execute_func(char **argv, char **arguments, int index);
char *_get_env(char *name);
char *_get_path(char *cmd);

/*string.h function*/
char *_strcopy(char *dest, char *src);
char *_strdup(const char *str);
int _strcmp(const char *str1, const char *str2);
int _strlen(char *str);
char *_strcat(char *destination, const char *source);

/*freeing*/
void free_two(char **free_1, char **free_2);
void free_2D(char **array);


/*tool function*/
void reverse_string(char *str, int length);
char *_itoa(int n);

/*error*/
void print_error(char *command, char *file, int n);

#endif
