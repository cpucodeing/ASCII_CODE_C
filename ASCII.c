#include <stdio.h>

void main()
{
	int i;
	for (i = 0; i <= 128; i++)
	{
		printf("%d, %x, %o, %c \n", i, i, i, i);
	}
}