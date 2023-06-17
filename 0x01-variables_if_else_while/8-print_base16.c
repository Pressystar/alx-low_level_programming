#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int f;
char low;
for (f = 0 ; f <= '9'; f++)
putchar(f);
for (low = 'a'; low <= 'h'; low++)
putchar(low);
putchar('\n');

return (0);
}
