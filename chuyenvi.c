#include <stdio.h>

void nhapmang(int n,int m, int a[10][10]){
	for (int i=0;i<n;i++){
		for (int j = 0; j<m; j++){
			printf("\nA[%d][%d] = ",i,j); 
			scanf("%d",&a[i][j]);
		}			
	}
}

void hienmang(int n,int m, int a[10][10]){
		for (int i=0;i<n;i++){
		for (int j = 0; j<m; j++){
			printf("%d  ",a[i][j]);
		}			
		printf("\n");
	}
}

int chuyenVi(int i, j, a[10][10], b[10][10]){
	for (int n = 0; n<i; i++){
		for( int m=0; m<j; m++){
			b[m][n] = a[n][m];
		}
	}
}

int maxHang

int main(){
	
}