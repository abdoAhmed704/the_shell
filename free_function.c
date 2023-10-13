#include "shell.h"

/**
 * if_free - helper function to reduce no.lines
 *
 * @if_null: if this is NULL
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
