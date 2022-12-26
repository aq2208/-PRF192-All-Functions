/*Nguyễn Anh Quân - SE1708 - Workshop 1 bài 2

2.Trong ý 1 số nguyên được khai báo dưới dạng số nguyên không dấu kích thước 1 Byte. 
Nếu người nhập vào giá trị là 450. Giải thích giá trị hiển thị trên màn hình.*/

#include <stdio.h>
int main()
{
	unsigned char i;
	printf("\nNhap vao 1 so nguyen : "); scanf("%d", &i);
	printf("\nSo do o he 10 la = %d",i);
	printf("\nSo do o he 16 la = %x",i);
	printf("\nSo do o he 8 la = %o",i);
	
}