#include <stdio.h>
#include <string.h>

int main()
{
	char a = '1',b = '2';
	char *const foo = &a;
	
	*foo = a;
	printf("foo = %d, %d",foo,*foo);
	
	getchar();
	return 0;
}
