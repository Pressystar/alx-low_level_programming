#include"main.h"

/**
 * _strncat -Write a function that concatenates two
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int p;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[m] = src[p];
		m++;
		p++;
	}
	dest[m] = '\0';
	return (dest);
}
