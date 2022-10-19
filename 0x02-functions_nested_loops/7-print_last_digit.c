#include "main.h"

int print_last_digit(int nld)

{
	int naa;
	naa = (nld % 10);
	if (naa < 0)
	{
		naa = (-1 * naa);
	}
	_putchar(naa + '0');
	return(naa);
}

