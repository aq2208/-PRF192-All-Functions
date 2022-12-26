//sorting an array of integers

#include <stdio.h>

int nhapMang(int a[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}

int xuatMang(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d, ", a[i]);
    }
}

//be den lon
int selectionSort(int a[], int n){
    int vt, tmp;	
	for (int i = 0 ; i<n;i++){
	  	vt=0;
	  	for (int j = 1;j<n-i;j++){
	  		if (a[j]>a[vt]) vt=j;
		}
		tmp=a[vt];
		a[vt]=a[n-i-1];
		a[n-i-1]=tmp;
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

//lon den be
int selectionSort2(int a[], int n){
    int vt, tmp;	
	for (int i = 0 ; i<n;i++){
	  	vt=0;
	  	for (int j = 1;j<n-i;j++){
	  		if (a[j]<a[vt]) vt=j;
		}
		tmp=a[vt];
		a[vt]=a[n-i-1];
		a[n-i-1]=tmp;
	}
}

int bubbleSort2(int a[], int n){
    int tmp;
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(a[j]<a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main() {
    int a[100], n;
    do{
        scanf("%d", &n);
    }while(n<0 || n>20);
    nhapMang(a, n);
    selectionSort(a, n);
    bubbleSort(a, n);
    selectionSort2(a, n);
    bubbleSort2(a, n);
    xuatMang(a, n);

}