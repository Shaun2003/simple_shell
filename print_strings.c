#include "shell.h"

/**
 * _strlen - return length of a string
 * @s: string whose length to examine
 *
 * Return: digit length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - perform lexicogarphic comparison of the two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: negative if s1 < s2
 * positive if s1 > s2
 * zero if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - examine if needle start with haystack
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: address of next char of the haystack or NULL
 */

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - Concatenatestwo strings
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: Pointer to the destination buffer
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
