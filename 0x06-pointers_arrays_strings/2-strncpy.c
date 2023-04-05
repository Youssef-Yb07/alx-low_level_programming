#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: initial string
 * @src: appended string
 * @n: number of bytes to use from src
 *
 * Return: concatinated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_size = 0;

	while (*(src + i))
	{
		src_size++;
		i++;
	}
	for (i = 0; i < n; i++)
	{
		if (i >= src_size)
		{
			*(dest + i) = '\0';
			continue;
		}
		*(dest + i) = *(src + i);
	}
	return (dest);
}
