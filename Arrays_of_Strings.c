#include <stdio.h>
#include <string.h>

void Nhapxau(char a[][100], int n){
    for (int i=0; i<n; i++){
        printf("\nTen svien %d la: ", i+1);
        scanf("%[^\n]", &a[i]);
        fflush(stdin);
    }
}

void Xuatxau(char a[][100], int n){
    printf("\n");
    for (int i=0; i<n; i++){
        printf("%s\t", a[i]);
    }
}

int main(){
    char names[100][100];
    int n;
    printf("\nSo sinh vien la: "); scanf("%d", &n);
    fflush(stdin);  //phai xoa bo dem vi sau khi nhap n thi enter se bi luu vao trong bo dem
    Nhapxau(names, n);
    Xuatxau(names, n);
}