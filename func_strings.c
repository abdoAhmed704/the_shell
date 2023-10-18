#include "shell.h"

/**
 * 
 * 
 * 
 **/
int _strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}
/**
 * _strdup - func duplicates a string
 * @str: the duplicated string
 *
 * Return: the duplicated string pointer of NULL if failed
 */
char *_strdup(const char *str)
{
	char *dest;
	unsigned int len = 0, index;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	dest = malloc(sizeof(char) * (1 + len));
	if (dest == NULL)
		return (NULL);
	for (index = 0; index <= len; index++)
		dest[index] = str[index];
	return (dest);
}

/**
 * _strcopy - function that copies
 *
 * @dest: the string needed to copy to
 * @src: source
 *
 * Return: the destination as a pointer
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	if ((dest == src) || (src == 0))
		return (dest);
	for (; src[index];)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/**
 * _strcmp - function that compares
 *
 * @str1: a string
 * @str2: a string
 *
 * Return: 0 if eqal
 */
int _strcmp(const char *str1, const char *str2)
{
    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }

    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}
/**
 * 
 * 
 * 
 * 
 * 
 **/
char *_strcat(char *destination, const char *source)
{
    char *start = destination;

    while(*destination)
    {
        destination++;
    }

    while(*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';
    return start;
}
