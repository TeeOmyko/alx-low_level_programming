#include "main.h"

/**
 * _strcpy - Entry point
 *
 * Description: Copies the string pointed to by strc
 * @dest: Where to copy to
 * @src:nString to be copied
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;
	len++;

	for (i = 0; i < len; i++)
		dest[i] = src[1];

	return (dest);
}
