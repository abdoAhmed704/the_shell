#include "shell.h"


void reverse_string(char *str, int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        end--;
        start++;
    }
}

char *_itoa(int n)
{
    char buffer[20];
    int i = 0;

    if (n == 0)
        buffer[i++] = '0';
    else
    {
        while (n > 0)
        {
            buffer[i++] = (n % 10) + '0';
            n /= 10;
        }
    }
    buffer[i] = '\0';
    reverse_string(buffer, i);
    return(_strdup(buffer));
}

void print_error(char *command, char *file, int n)
{  
    char *idx;
    
    idx = _itoa(n);

    write(STDERR_FILENO, file, _strlen(file));
    write(STDERR_FILENO, ": ", 2);
    write(STDERR_FILENO, idx, _strlen(idx));
    write(STDERR_FILENO, ": ", 2);
    write(STDERR_FILENO, command, _strlen(command));
    write(STDERR_FILENO, ": not found\n", _strlen(": not found\n"));
    free(idx);
}