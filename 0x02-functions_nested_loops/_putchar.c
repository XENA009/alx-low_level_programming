#include <unistd.h>
#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: the caracter to print
*
* Return: On success 1.
	  On Error, -1 is returned, and errno is set approptiately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

