#include <stdio.h>

int main()
{
	char *s;
	int a;
	a = 1;
	s = (char*)&a;

	printf("1. Byte %d -- 2. Byte %d", *s, *(s+1));
	
	return 0;
}
