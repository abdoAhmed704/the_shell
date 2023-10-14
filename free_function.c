#include "shell.h"

/**
 * free_two - helper function to reduce no.lines
 * @free_1: first free
 * @free_2: second free
 *
 * Return (void).
 **/
void free_two(char **free_1, char **free_2)
{
	free(*free_1), *free_1 = NULL;
	free(*free_2), *free_2 = NULL;
}




/**
 * free_2D - free 2D array
 * @array: the 2D array
 *
 * Return (void).
 **/
void free_2D(char **array)
{
	int index;
	
	if (array == NULL)
		return;
	for (index = 0; array[index]; index++)
	{
		free(array[index]),  array[index] = NULL;
	}
	free(array), array = NULL;
}
