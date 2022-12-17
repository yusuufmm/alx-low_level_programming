#include "main.h"

/**
 * _strncpy - c function that copies a string
 * if the length the source string is less maximum bytes number
 * the remainder of the destination string is filled with null bytes
 * @dest: buffer storing the string data
 * @src: the source string
 * @n: max number of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
