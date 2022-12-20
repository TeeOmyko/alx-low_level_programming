#include "main.h"

/**
 * _strcpy - Entry point
 *
 * Description: Copies the string pointed to by strc
 * @dest: Where to copy to
 * @src: String to be copied
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
