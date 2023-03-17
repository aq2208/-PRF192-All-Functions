#include <stdio.h>

int nhap(int a[7]){
	int i=0;
	for(; i<7; i++){
		scanf("%d", a[i]);
	}
}

int hien(int a[7]){
	int i=0;
	for(; i<7; i++){
		printf("%d", a[i]);
	}
}

int main(){
	int a[7];
	nhap(a);
	int i, j, jmax, max;
	for (i=0; i<6; i++){
		max = a[0];
		jmax = 0;
		for(j=1; j<7-i; j++){
			if (a[j]>max){
				max = a[j];
				jmax = j;
			}
		}
		if (jmax != 7-i-1){
			max = a[7-i-1];
			a[7-i-1]=a[jmax];
			a[jmax] = max;
		}
	}
	hien(a);
	
}
