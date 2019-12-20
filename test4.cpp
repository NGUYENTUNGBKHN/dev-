#include <stdio.h>
#include <string.h>

int main()
{
	char a = '1', b = '2';
	const char *const foo = &a;
	
	*foo = &b;
	
	printf("foo = %d, %d \n",foo,*foo);
	
	getchar();
	return 0;
}
