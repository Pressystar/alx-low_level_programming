#include"main.h"
#include<stdio.h>
#include<stdlib.h>


/**
 * wrdcnt - functions that counts the numbers in a string
 * @s: number of strings to count
 * Return: integer
 */
int wrdcnt(char *s)
{
	int x, n = 0;

	for  (x = 0; s[x]; x++)
	{
		if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
				n++;
		}
		else if (x == 0)
			n++;
	}
	n++;
	return (n);
}

/**
* **strtow - Write a function that splits a string into word
 * @str: string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
int a, b, c, d, n = 0, wc = 0;
char **w;

if (str == NULL || *str == '\0')
return (NULL);
n = wrdcnt(str);
if (n == 1)
return (NULL);
w = (char **)malloc(n *sizeof(char *));
if (w == NULL)
return (NULL);
w[n - 1] = NULL;
a = 0;
while (str[a])
{
if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
{
for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
;
b++;
w[wc] = (char *)malloc(b *sizeof(char));
b--;
if (w[wc] ==  NULL)
{
for (c = 0; c < wc; c++)
free(w[c]);
free(w[n - 1]);
free(w);
return (NULL);
}
for (d = 0; d < b; d++)
w[wc][d] = str[a = d];
w[wc][d] = '\0';
wc++;
a += b;
}
else
a++;
}
return (w);
}
