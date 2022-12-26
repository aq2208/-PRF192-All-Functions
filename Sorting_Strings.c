//sorting an array of strings
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

void bubbleSort(char a[][100], int n){
    char tmp[100];
    for( int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(strcmp(a[j],a[j+1])>0){
                strcpy(tmp, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], tmp);
            }
        }
    }
}

void selectionSort(char a[][100], int n){
    int vtri;
    char tmp[100];
    for(int i=0; i<n; i++){
        vtri = 0;
        for(int j=1; j<n-i; j++){
            if(strcmp(a[j], a[vtri])>0){
                vtri = j;
            }
        }
        strcpy(tmp, a[vtri]);
        strcpy(a[vtri], a[n-i-1]);
        strcpy(a[n-i-1], tmp);

    }
}

int main(){
    char names[100][100];
    int n;
    printf("\nSo sinh vien la: "); scanf("%d", &n);
    fflush(stdin);  //phai xoa bo dem vi sau khi nhap n thi enter se bi luu vao trong bo dem
    Nhapxau(names, n);
    bubbleSort(names, n);
    selectionSort(names, n);
    Xuatxau(names, n);
}