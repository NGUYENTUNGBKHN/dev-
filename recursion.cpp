#include <iostream>

// linear recusion 
int linear_recusion(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n*linear_recusion(n - 1);
	}
}


int main()
{
	int value = 0;
	
	value = linear_recusion(5);
	printf(" %d \n",value);
	return 0;
}
