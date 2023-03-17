/*users are required to enter five integer numbers using the keyboard
The program needs to find the maximum even number among the entered values. The program then displays this number on screen*/
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
    int sochan=0; 
    for (int j=0;j<5; j++){
        if(a[j]%2==0 &&a[j]>=sochan){
            sochan = a[j];
        }
    }







    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("%d", sochan);








    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}