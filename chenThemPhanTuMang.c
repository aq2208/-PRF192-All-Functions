//sắp xếp 1 mảng, sau đó chèn thêm 1 phần tử sao cho mảng vẫn giữ đc thứ tự đúng (phải tìm đc vtri chèn thích hợp)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int chenMang(int a[], int n, int vtri){
    for(int i=n-1; i>0 && i>=vtri+1; i--){
        a[i]=a[i-1];
    }
}

int main() {
    system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

    int a[50],tmp, x;
	int vt,n;
	printf("\nNhap so phan tu mang: ");scanf("%d",&n);
	for (int i = 0; i<n;i++) {
		printf("A[%d] = ",i); scanf("%d",&a[i]);
	}
	
	for (int i = 0 ; i<n;i++){
	  	vt=0;
	  	for (int j = 1;j<n-i;j++){
	  		if (a[j]>a[vt]) vt=j;
		  }
		tmp=a[vt];
		a[vt]=a[n-i-1];
		a[n-i-1]=tmp;
	}
	  
// Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("\nMang sau khi sap xep la:");
	for (int i = 0; i < n; i++) printf("%d ",a[i]);
	printf("\nNhap phan tu can chen vao: "); scanf("%d", &x);
    int vtri = 0;
    for(int i = 0;vtri < n && a[i]<x; i++) {vtri++;}
    n++;
    chenMang(a,n,vtri);
    a[vtri]=x;

	for (int i = 0; i < n; i++) printf("%d ",a[i]);

//--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}


