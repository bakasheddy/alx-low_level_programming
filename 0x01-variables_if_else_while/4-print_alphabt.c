#include <stdio.h>

int main(void)
{
	char c;
	for (c= "a"; c <= "z"; c++)
	{
		if (c != "c" && c != "q")
		{
			putchar(c);
		}
	}
	putchar("\n");
	return(0);
}
