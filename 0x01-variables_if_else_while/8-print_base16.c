#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int b;
char low;
for (b = 0 ; b <= '9'; b++)
putchar(b);
for (low = 'a'; low <= 'h'; low++)
putchar(low);
putchar('\n');

return (0);
}
