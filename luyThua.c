#include <stdio.h>

int luyThua(int a, int x) {
	int power = 1;
	for(int i=1; i<=x; i++) {
		power *= a;
	}
	return power;
}

int main() {
	int a,x;
	printf("\nNhap vao so nguyen a va x : "); scanf("%d %d", &a, &x);
	printf("\nluy thua a^x la : %d", luyThua(a,x));
}