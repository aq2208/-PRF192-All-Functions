//Your program allows users to enter array of n integers, where n is entered by the user (n should be kept as a small value, in this case, n <= 10). Your program should then print the sum of squared of each even integer
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

int main() {
    system("cls");
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int a[20], n;
    do{
    scanf("%d", &n);
    }while(n>10||n<0);
    nhapMang(a, n);
    int sum=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            sum = sum + pow(a[i], 2);
        }
    }








    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("%d", sum);








    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}