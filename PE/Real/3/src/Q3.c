#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int nhapMang(int a[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}

int bubbleSort(int a[], int n){
    int tmp;
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(a[j]>a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main() {
    system("cls");
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int a[100], n;
	do{
		scanf("%d", &n);
	}while(n<=0);
	nhapMang(a, n);
	bubbleSort(a, n);






    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(int i=0; i<n; i++){
		if(abs(a[i])%2!=0){
			printf("%d\n", a[i]);
		}
	}








    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}