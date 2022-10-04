#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer to a new string
 * which is a duplicate of the str
 * @str: string to be checked
 *
 * Return: NULL if srt = NULL, pointer if success, NULL
 * if insufficient memory
 */
char *_strdup(char *str)
{
	char *s;

	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[len] = '\0';
	return (s);
}
