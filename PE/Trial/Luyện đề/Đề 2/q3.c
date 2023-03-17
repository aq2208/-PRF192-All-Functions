/*your program allows users to enter 5 integer numbers
The system sorts the entered numbers in ascending order. The system then displays only the even numbers to screen. There is a newline character between any two adjacent numbers*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int a[5];
    for(int i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    int tmp;
    for(int i=5-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(a[j]>a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }







    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    for(int i=0; i<5; i++){
        if(a[i]%2==0){
            printf("%d\n", a[i]);
        }
    }








    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}