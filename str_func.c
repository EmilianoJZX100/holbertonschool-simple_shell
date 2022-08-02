#include "main.h"
#include <stdio.h>
:wq
strcat - copies a string
 *@dest: character to check
  *@src: character to check
   *Return: the length of a string
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
 *  * _strlen - shows length of a string
 *   * @s: character to check
 *    * Return: length of string
 *     */
int _strlen(char *s)
{
		int l;
		
			for (l = 0 ; s[l] != '\0' ; l++)
					{
							}
				return (l);
}
include <stdlib.h>
#include <unistd.h>

