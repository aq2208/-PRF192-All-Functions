#include <stdio.h>
#include <string.h>

int main(){
//Declaration, Input, Output
    char s1[30];
    char s2[30];
    printf("\nNhap vao string s1: ");
    scanf("%[^\n]", s1);  //nhan moi ki tu tru dau enter
    printf("%s", s1);
    fflush(stdin);
    printf("\nNhap vao string s2: ");
    scanf("%[^\n]", s2);
    printf("\n%s", s2);

//String Operator
    //strlen
    printf("\nDo dai xau s1 = %d", strlen(s1));
    //strcpy
    strcpy(s2,s1);  //s2 = s1 
    printf("\n%s", s2);
    //strcmp
    int cmp = strcmp(s1,s2); 
    if(cmp = 0) printf("%s = %s", s1,s2);
    if(cmp>0) printf("%s > %s",s1,s2);
    if(cmp<0) printf("%s < %s",s1,s2);
    //strcat
    strcat(s1,s2);
    printf("\n%s", s1);  //s1 = s1 + s2
}