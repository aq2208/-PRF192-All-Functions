/*Nguyễn Anh Quân - SE1708
ws4: Cho trước mảng số nguyên A[n]. Tìm và in ra các số khác nhau trong mảng đó*/

/*ý tưởng: tạo ra 1 mảng b[] để chứa các phần tử khác nhau trong A[]. đầu tiên cho 
b[0]=a[0] sau đó so sánh A[i] với các phần tử trong b[], nếu thỏa mãn thì thêm A[i] vào b[]*/

#include <stdio.h>

int nhapMang(int A[], int n) {
	for(int i=0; i<n; i++) {
		printf("\nA[%d] = ", i); scanf("%d", &A[i]);
	}
}

int xuatMang(int A[], int n) {
	for (int i=0; i<n; i++) {
		printf(" %d  ", A[i]);
	}
}

int kiemTra (int A[], int n) {
	int b[n];
	int x = 1;
	b[0] = A[0];
	for (int i=1; i<n; i++){
		int dem = 0;
		for (int j = 0; j<x; j++) {
			if (A[i] == b[j]) {
				dem++;
			}
		}
		if (dem == 0) {
			b[x] = A[i];
			x++;
		}
	}
	printf("\nCac so khac nhau trong mang la: ");
	xuatMang(b,x);
}

int main() {
	int A[100];
	int n;
	do {
		printf("\nNhap vao so phan tu cua mang n= "); scanf("%d", &n);
	} while (n<2 || n>99);
	nhapMang(A, n);
	kiemTra(A, n);
	
}