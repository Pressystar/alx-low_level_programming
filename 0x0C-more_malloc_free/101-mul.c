#include"main.h"
#include<stdio.h>
#include<stdlib.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_num(char *final_prod, char *next_len);


/**
 * find_len - Entry point
 * @str: String
 * Return: length of string
 */
int find_len(char *str)
{
int len = 0;

while (*str++)
len++;
return (len);
}

/**
 * create_xarray - Entry point
 * @size: the size of array
 * description: if there is error functions exits
 * Return: pointer to the array
 */
char *create_xarray(int size)
{
char *array;
int index;

array = malloc(sizeof(char) * size);

if (array == NULL)
exit(98);

for (index = 0; index < (size - 1); index++)
array[index] = 'x';

array[index] = '\0';

return (array);
}

/**
 * iterate_zeroes - Entry point
 * @str: string of numbers
 * Return: pointer to the next non-zero
 */

char *iterate_zeroes(char *str)
{
while (*str && *str == '0')
str++;
return (str);
}

/**
 * get_digit - Entry point
 * @c: character converted
 * Description: if c is a non-digit, it will exit with 98
 * Return: int
 */
int get_digit(char c)
{
int digit = c - '0';

if (digit < 0 || digit > 9)
{
printf("Error\n");
exit(98);
}
return (digit);
}

/**
 ** get_prod - Entry point
 * @prod: input value
 * @mult: string of numbers
 * @digit: input value
 * @zeroes: input value
 * Description: if mult contain a non-digit, it exits with 98
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
int mult_len, num, units = 0;

mult_len = find_len(mult) - 1;
mult += mult_len;
while (*prod)
{
*prod = 'x';
prod++;
}

prod--;

while (zeroes--)
{
*prod = '0';
prod--;
}
for (; mult_len >= 0; mult_len--, mult--, prod--)
{
if (*mult < '0' || *mult > '9')
{
printf("Error\n");
exit(98);

}
num = (*mult - '0') * digit;
num += units;
*prod = (num % 10) + '0';
units = num / 10;
}
if (units)
*prod = (units % 10) + '0';
}
/**
 * add_nums - Entry point
 * @final_prod: input value
 * @next_prod: input value
 * @next_len: input value
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
int num, units = 0;

while(*(final_prod + 1))
final_prod++;
while (*(next_prod + 1))
next_prod++;
for (; *final_prod != 'x'; final_prod--)
{
num = (*final_prod - '0') + (*next_prod - '0');
num += units;
*final_prod = (num % 10) + '0';
units = num / 10;
next_prod--;
next_len--;
}
for (; next_len >= 0 && *next_prod != 'x'; next_len--)
{
num = (*next_prod - '0');
num += units;
*final_prod = (num % 10) + '0';
units = num / 10;

final_prod--;
next_prod--;
}
if (units)
*final_prod = (units % 10) + '0';
}

/**
* main - Entry point
* @argv:number of arguments
* @argc: array or agruments
* Return: 0
*/
int main(int argc, char*argv[])
{
char *final_prod, *next_prod;
int size, index, digit, zeroes = 0;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
if (*(argv[1]) == '0')
argv[1] = iterate_zeroes(argv[1]);
if (*(argv[2]) == '0')
argv[2] = iterate_zeroes(argv[2]);
if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
{
printf("0\n");
return (0);
}
size = find_len(argv[1]) + find_len(argv[2]);
final_prod = create_xarray(size + 1);
next_prod = create_xarray(size + 1);

for (index = find_len(argv[2]) - 1; index >= 0; index--)
{
digit = get_digit(*(argv[2] + index));
get_prod(next_prod, argv[1], digit, zeroes++);
add_nums(final_prod, next_prod, size - 1);
}
for (index = 0; final_prod[index]; index++)
{
if (final_prod[index] != 'x')
putchar(final_prod[index]);
}
putchar('\n');
free(next_prod);
free(final_prod);
return (0);
}
