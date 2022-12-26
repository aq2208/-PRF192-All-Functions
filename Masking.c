//loai di 1 phan tu voi 1 dieu kien nao do
//lay cac phan tu o sau de len phan tu bi loai

//dùng mask sẽ loại đc phần tử nhưng chỉ là loại tạm thời, có thể lấy lại bất cứ luc nào
//cho mask mảng đó là toàn 1, số nào lẻ thì ở đó là 0, sau đó in ra những chỗ nào có mask=1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

    int a[50], mask[50], tmp;
	int vt, n;
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
			mask[i]=0;
		}
	}

	for (int i = 0; i < n; i++){ 
        if(mask[i]!=0)
        printf("%d ",a[i]);
    }    

//--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system ("pause");
    return(0);
}


