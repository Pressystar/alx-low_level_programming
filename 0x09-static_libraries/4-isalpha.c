#include"main.h"
/**
 * _isalpha - write a program that checks for alphabetical character
 * @c: character to check
 * Return: 1 if c is a letter and return 0 if its not
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z')));
}
