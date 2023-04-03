#include <unistd.h>
#include "main.h"

/**
* _putchar - writes the char  c to stdout
* @c: the char to print
*
* Return: On success 1.
	  On Error, -1 is returned, and err  is set approptiately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

