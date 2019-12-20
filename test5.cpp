#include <iostream>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned char *a = (unsigned char*)malloc(16);
	int *b = (int*)malloc(4);
	int arr;
	
	b[0] = 0x12345678;
	b[1] = 0x12345678;
	b[2] = 0x12345678;
	b[3] = 0x12345678;
	
	for (int i = 0; i < 4;i++)
	{
		for (int j = 0; j < 4;j++)
		{
			arr = b[i];
			a[i*4 + j] = (unsigned char)(arr >> 8*(3-j));
		}
	}
	
	for (int i = 0; i < 16; i++)
	{
		printf(" a[%d] = %x \n",i,a[i]);
	}
	
	getchar();
	return 0;
}
