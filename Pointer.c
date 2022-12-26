#include <stdio.h>
int main()
{
	int a, b, c, *p;
	printf("\nNhap vao so nguyen a = "); scanf("%d", &a);
	p = &a; //p sẽ mang gtri là địa chỉ của biến a
	printf("\na = %d",a);
	printf("\nDia chi cua a la %d", &a);
	printf("\nDia chi cua a la %d", p);
	printf("\nGtri cua a la %d", *p);
	*p = 10; //gtri của ô nhớ p đang trỏ vào bằng 10, tức a = 10
	printf("\nGia tri cua a = %d", a);
}