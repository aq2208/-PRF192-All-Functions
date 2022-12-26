#include <stdio.h>
#include <conio.h>
#include <windows.h>

void nhapmang(int n, int []);  
void hienmang(int n, int []);  
void nhapN(int *n);    
int timkiemNP(int n,int a[],int x);
int selectsort(int n,int a[]); 
int bubblesort(int n,int a[]); 
void pause(); 
void menu();  

int main(){
		int n,a[100];
		int count,sel,x,find;
	do{
		menu();
		scanf("%d",&sel);
		switch (sel){
			case 1:
				nhapN(&n);
				pause();
				break;
			case 2:
				if (n>0 && n <20 ) 
				 	nhapmang(n,a);				 	
				else printf("\n %d khong dung");
				pause();
				break;
			case 3:
				if (n>0 && n <20 ) 
				 	hienmang(n,a);
				else printf("\n Chua nhap mang");
				pause();
				break;
			case 4:
				printf("\nMang truoc khi sap xep la:\n");
				hienmang(n,a);
				printf("\nQua trinh sap xep tang dan:\n");
				selectsort(n, a);
				printf("\nMang sau khi duoc sap xep la:\n");
				hienmang(n,a);
				pause();
				break;
			case 5:
				printf("\nMang truoc khi sap xep la:\n");
				hienmang(n,a);
				printf("\nQua trinh sap xep giam dan:\n");
				bubblesort(n, a);
				printf("\nMang sau khi duoc sap xep la: \n");
				hienmang(n,a);
				pause();
				break;
			case 6:
				printf("\n Nhap gia tri x can tim: ");
				scanf("%d",&x);
				printf("\nQua trinh tim kiem nhi phan:");
				find = timkiemNP(n,a,x);
				if (find>0) printf("\nGia tri %d tai vi tri %d trong mang",x,find);
				else printf("\nGia tri %d khong co trong mang",x);
				pause();
				break;
			case 0:
				printf("\nBye!!!!");				
				break;	
			default: 
				printf("\nGia tri vua nhap vao khong dung");
				pause();						
		}
	}while (sel !=0);
}
void nhapmang(int n, int a[]){
	printf("\nNhap %d so nguyen", n);
	for(int i=0; i<n; i++){
		printf("\na[%d] = ", i); scanf("%d", &a[i]);
	}
}
void hienmang(int n, int a[]){
	for(int i=0; i<n-1; i++){
		printf("%d, ", a[i]);
	}
	printf("%d", a[n-1]);
	printf("\n");
}
void nhapN(int *n){
	do{
		printf("\nn (0<n<20) =  ");
		scanf("%d", n);
	}while((*n<=0) || (*n>=20));
}
int timkiemNP(int n,int a[],int x){
	int position=-1, i, high=n-1, low=0;
	do{
		i = (high+low+1)/2;
		printf("\n mid = %d  a[%d] = %d  x = %d",i, i, a[i], x);
		if(x < a[i])
			high = i-1;
		else if (x > a[i])
			low = i+1;
		else
			position = i;
	} while(position==-1 && low<=high);
	return position;
}
int selectsort(int n,int a[]){
	int vtmax=0, tmp;
	for(int i=0; i<n-1; i++){
		vtmax=0;
		for(int j=1; j<n-i; j++){
			if (a[j] > a[vtmax]){
				vtmax = j;
			}
		}
		if(vtmax != n-1-i){
			tmp = a[n-1-i];
			a[n-1-i]=a[vtmax];
			a[vtmax]=tmp;
		}
		hienmang(n,a);
	}
}
int bubblesort(int n,int a[]){
	int i, j, tmp;
	for(i=n-1; i>0; i--){
		for(j=0; j<i; j++){
			if(a[j] < a[j+1]){
				tmp= a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
		hienmang(n, a);
	}
}
void pause(){
	printf("\nNhan phim bat ky de quay ve MENU ");
	getch();
	//clrscr();
	system("cls");
}
void menu(){
	printf("\n       ==MENU==     ");
	printf("\n1. Nhap n (0<n<20)");
	printf("\n2. Nhap cac phan tu cho mang a");
	printf("\n3. Hien thi cac phan tu cho mang a");
	printf("\n4. Sap xep mang a theo thu tu tang dan (Selection sort)");
	printf("\n5. Sap xep mang a theo thu tu giam dan (Bubble sort)");
	printf("\n6. Tim kiem gia tri x trong mang a");
	printf("\n0. Thoat");
	printf("\n\n   Chon mot chuc nang: ");
}