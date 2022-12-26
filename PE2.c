#include <stdio.h>
int main(){
	int n;
	int sum=0, dem =1;
	do {
		printf("\nNhap vao so nguyen duong n (n>=0): "); scanf("%d", &n);
		if(n<0) printf("\nKhong hop le. Vui long nhap lai");
	} while(n<0);
	for(int i=n; i>=0; i--){
		if(i%2==0 && dem<=3){
			sum += i;
			dem++;
		}
	}
	printf("%d", sum);
}