/*  Nguyễn Anh Quân - SE1708 - Workshop 1 bài 1

1. Viết chương trình yêu cầu người dùng nhập vào một số nguyên, sau đó in số đó 
ra màn hình dưới 3 dạng. Hệ 10, hệ 16, hệ 8*/

#include <stdio.h>
int main()
{
	int i;
	printf("\nNhap vao 1 so nguyen : "); scanf("%d", &i);
	printf("\nSo do o he 10 la = %d",i);
	printf("\nSo do o he 16 la = %x",i);
	printf("\nSo do o he 8 la = %o",i);
	return 0;
}