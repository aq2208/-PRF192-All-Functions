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
	for(int i=0; i<len; i++){
		if(i==0 || s[i-1]==' '){
			if(s[i]>=97 && s[i]<=122){
				s[i]=s[i]-32;
			}
		}
	}







    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%s", s);








    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}