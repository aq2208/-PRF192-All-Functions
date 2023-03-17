//Your program should allow users to enter an integer numnber ‘n’, then it should display the sum of all the digits forming ‘n’.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int n, sum=0;
    scanf("%d", &n);
    int digit;
    while(n>=1){
        digit = n%10;
        sum+=digit;
        n/=10;
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