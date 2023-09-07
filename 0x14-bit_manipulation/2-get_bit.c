#include"main.h"


/**
 * get_bit - Write a function that returns the value of a bit
 * @n: the numbers to search
 * @index: the index
 * Return:  the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bt_val;

if (index > 63)
return (-1);

bt_val = (n >> index) & 1;

return (bt_val);
}
