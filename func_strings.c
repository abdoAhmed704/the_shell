#include "shell.h"

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
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
