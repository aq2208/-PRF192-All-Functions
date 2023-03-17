/*users are required to enter two numbers of types "double": 'a', 'b' using the keyboard (STDIN). Here, 'a' and 'b' are side lengths of a rectangular
Please print out the area of the rectangular with 2 decimal places */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    double a, b;
    scanf("%lf %lf", &a, &b);







    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("%.2lf", a*b);








    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}