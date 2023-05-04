#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c
 * @c: le charactere pour  print
 *
 * Return: 1 if valid
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

