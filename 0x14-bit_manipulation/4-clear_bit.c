#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear (0-based)
 *
 * Return: 1 for success, -1 for failure (if the index is out of range)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63) /* Keeps index in the valid range for a 64-bit number */
return (-1);

*n = *n & (~(1UL << index)); /* Clear the bit at the specified index */
return (1);
}
