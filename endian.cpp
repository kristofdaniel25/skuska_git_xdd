#include <stdio.h>

int main()
{
	short int *s;
	short int a;
	a = 256;
	s = &a;
	//s = *(s+1);
	printf("%d", &s);
	
	return 0;
}
