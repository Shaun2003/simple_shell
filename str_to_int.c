#include "shell.h"

/**
<<<<<<< HEAD:_atoi.c
 * Interactive - True if shell is on Interactive Mode
 * @info: struct address
=======
 * interactive - it returns true if shell is interactive mode
 * @info: it describes struct address
>>>>>>> c76496eff56f47da802d8c80b08c0a89d96696ee:str_to_int.c
 *
 * Return: 1 if on interactive mode
 * 0 if not
 */

int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - examine if character is a delimeter
 * @c: char to examine
 * @delim: delimeter string
 *
 * Return: 1 if is true
 * 0 if not
 */

int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - examine the alphabetic character
 * @c: character to input
 *
 * Return: 1 if c is alphabetic
 * 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - change the string to a digit
 * @s: string to be changed
 *
 * Return: 0 if there is no num in a string
 * changed num if not
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
