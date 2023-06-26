#include"main.h"
/**
 * puts - prints a string
 * @str: string to be printed
 */
void _puts(char *str)
{
	whilr (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
