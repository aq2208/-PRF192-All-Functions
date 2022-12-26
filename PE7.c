//your program allows users to enter a string with an odd number of character (5<n<20). The program then displays the middle 5 characters of the string

#include <stdio.h>
#include <string.h>

int main(){
    char s[21];
    do{
    scanf("%[^\n]", s);
    }while((strlen(s)%2==0)&&(strlen(s)<=5));
    fflush(stdin);
    int mid = (strlen(s)/2);
    for(int i= mid-2; i<= mid+2; i++){
        printf("%c", s[i]);
    }
}