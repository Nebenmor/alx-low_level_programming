#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;

/* Check the endianness by examining the value of the first byte */
if (*c == 1)
return (1);  /* Little Endian */
else
return (0);  /* Big Endian */
}
