#include <stdio.h>
#include <string.h>
#include<stdlib.h> 

int main()
{
	char a = '1', b = '2';
	const char *foo;
	
	foo = &a;
	printf("foo = %x, %d \n",foo,*foo);
	foo = &b;
	printf("foo = %x, %d \n",foo,*foo);
	getchar();
	return 0;
}
