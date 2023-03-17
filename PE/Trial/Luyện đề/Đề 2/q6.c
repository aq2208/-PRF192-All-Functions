/*your program allows users to enter a string: 's' with maximum length of 100 characters. 
The system finds the number of words starting with letter 'h' and ending with letter 'g' in 's'.
 Finally, the system prints out that number.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    char s[101];
    scanf("%[^\n]", s);
    int len= strlen(s);
    int true = 1;
    int dem = 0;
    for (int i=0; i<len; i++){
        if (s[i]=='h' && (s[i-1]==' ' || i==0)){
            for(int j=i; j<=len; j++){
                if ((s[j]==' ' || j==len) && s[j-1]=='g'){
                    for(int k=i;k<j;k++){
                        if(s[k]==' ') true =0; 
                    }
                    if(true!=0) dem++;
                }
            }
        }
        true = 1;
    }







    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("%d", dem);








    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}