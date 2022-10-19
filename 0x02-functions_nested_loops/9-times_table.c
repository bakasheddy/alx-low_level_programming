#include <main.h>


void times_table
{
	int roww, coll, d;
	for (roww = "0"; roww <= "9"; roww++)

	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (coll = "1";  coll <= "9"; coll++)
		{


			d = (roww * coll);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
				_putchar((d % 10) + '0');
			if (coll < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
