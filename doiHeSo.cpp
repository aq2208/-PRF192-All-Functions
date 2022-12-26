#include <stdio.h>
int main()
{
	int i;
	printf("\nNhap vao 1 so nguyen : "); scanf("%d", &i);
	printf("\nSo do o he 10 la = %d",i);
	printf("\nSo do o he 16 la = %04x",i);
	printf("\nSo do o he 8 la = %04o",i);
	return 0;
}