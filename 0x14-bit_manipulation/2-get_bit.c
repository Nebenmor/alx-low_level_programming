#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index in a decimal number
 * @n: number to search
 * @index: index of the bit (0-based)
 *
 * Return: value of index bit, or -1 if the index is invalid
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63) /* Keeps index in valid range for a 64-bit number */
return (-1);

return ((n >> index) & 1);
}
