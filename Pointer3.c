//truyền con trỏ vào hàm
#include <stdio.h>
int tong(int *p, int *q){
	*p += 1;
	*q += 1;
	printf("\n%d  %d", *p, *q);
}

int main(){
	int a=6, b=3;
	tong(&a, &b);
	printf("\n%d  %d",a,b);
}