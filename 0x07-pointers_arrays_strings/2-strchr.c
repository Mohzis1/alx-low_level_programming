#include "main.h"
/**
 * _strchr - locates a character in a strin
 * @c: ocucurence of the character
 * @s: string
 * Return: a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	while *s
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (NULL);
}
