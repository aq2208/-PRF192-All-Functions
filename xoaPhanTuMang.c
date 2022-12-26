//loai di 1 phan tu voi 1 dieu kien nao do
//lay cac phan tu o sau de len phan tu bi loai

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void xoaphantu(int a[100],int i,int x) {
	for(int j=i; j<x; j++) {
		a[j]=a[j+1];
	}
}

int main() {
    system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

    int a[50],tmp;
	int vt,n=7;
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
	printf("\nMang sau khi loai cac phan tu le:");
		for(int i=n-1; i>=0; i--) {
		if(a[i]%2!=0) {
			xoaphantu(a,i,n);
			n--;
		}
	}

	for (int i = 0; i < n; i++) printf("%d ",a[i]);

//--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}


