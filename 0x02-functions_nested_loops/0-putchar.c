#include <_putchar.h>

int main(void)
{
	char *sh = "_putchar";
	while(*sh)
	{
		_putcha(*sh);
		*sh++;
	}
	putchar("\n");
	return(0);
}
