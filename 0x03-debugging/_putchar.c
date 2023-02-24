#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The  character to point
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is appropriatley
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
