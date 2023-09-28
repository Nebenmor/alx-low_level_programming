#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1 (0-based)
 *
 * Return: 1 for success, -1 for failure (if the index is out of range)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63) /* Keeps in valid range for a 64-bit number */
return (-1);

*n |= (1UL << index); /* Set the bit at the specified index to 1 */
return (1);
}
