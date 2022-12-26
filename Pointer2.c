#include <stdio.h>

int tong(int *p1, int *p2)
{
		return *p1 + *p2;
}

int main()
{
	int a = 6, b = 4;
	printf("\na = %d, b = %d",a,b);
	printf("\nTong = %d", tong(&a, &b));
}