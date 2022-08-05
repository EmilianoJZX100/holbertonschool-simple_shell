#include "main.h"
/**
 *_strcmp - compares two strings
 *@s2: character to check
 *@s1: character to check
 *Return: the length of a string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, count = 0;

	if (s1 == NULL || s2 == NULL)
		return (0);
	for (; s1[i]; i++)
	{
		if (s1[i] == s2[i])
		{
			count++;
		}
	}
	if (count == _strlen(s1))
	{
		return (0);
	}
	return (-1);
}
/*_strcat - copies a string
 * @dest: character to check
 * @src: character to check
 * Return: the length of a string
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * _strlen - shows length of a string
 * @s: character to check
 * Return: length of string
 */

int _strlen(char *s)
{
	int l;

	for (l = 0 ; s[l] != '\0' ; l++)
	{
	}
	return (l);
}

/**
 * _strdup - duplicates string
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	char *i;
	unsigned int j, k;

	if (str == NULL)
		return (NULL);
	j = k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	k++;
	i = malloc(k * sizeof(*str));

	if (i == NULL)
		return (NULL);

	while (j <= k)
	{
		i[j] = str[j];
		j++;
	}
	return (i);
}
