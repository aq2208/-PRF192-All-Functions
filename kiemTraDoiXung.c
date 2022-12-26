//Đề: kiểm tra tính đối xứng của mảng

#include <stdio.h>

int nhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("\na[%d] = ", i); scanf("%d", &a[i]);
	}
}

int main(){
	int a[20], n;
	int test = 1;
	do{
		printf("\nNhap vao so phan tu mang (n<20): "); scanf("%d", &n);
	}while (n>=20 || n<0);
	//Kiểm tra tính đối xứng của mảng
	nhapMang(a,n);
	for(int i=0; i<=(n/2); i++){
		if (a[i] != a[n-i-1])
			test = 0;
	}
	printf("\n%d", test);
}