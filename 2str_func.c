#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putchar_s - print a string using putchar
 * @s: The string to print
 * Return: amount of printed chars
 */
int _putchar_s(char *s)
{
	int i = 0;

	for (; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

/**
 *_prompt - function that prints the prompt
*/

void _prompt(void)
{
	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, "$ ", 2);
}

/**
 *_reps - counts delimiter chars
 *@str: string
 *@delim: delimiter
 *Return: count
 */
int _reps(char *str, char delim)
{
	int i = 0;
	int len = _strlen(str);
	int sum = 0;

	while (i <= len)
	{
		i++;
		if (str[i] == delim)
			sum++;
	}
	return (sum);
}
