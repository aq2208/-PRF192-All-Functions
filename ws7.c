/*Nguyen Anh Quan - SE1708 - ws7*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeSpaces(char a[]);
void capitalize(char a[]);
int count(char a[]);
void deleteSpace(char a[]);
void addSpace(char a[], char p[], int num);


//!cau 1: bo cach dau Spaces lien nhau
void removeSpaces(char a[]) {
	int i, j, len = strlen(a);
	for(i = 0; i < len; i++) {
		if(a[i]==' ' && a[i + 1]==' ') {
			for(j = i + 1; j < len; j++) {
				a[j] = a[j + 1];
			}
			i--;
			len--;
		} 
		else if(a[i] == '\t') {  //1 tab = 2 spaces
			a[i] = ' ';
		}
	}
}

//cau 2: sau dau cham phai viet hoa chu cai dau tien
void capitalize(char a[]){
    int i, len=strlen(a);
    for(i=0; i<len; i++){
        if(a[i]=='.' && (a[i+2]>=91&&a[i+2<=122])){
            a[i+2] = a[i+2]-32; 
        }
    }
}

//cau 3: truoc cac dau cau khong duoc co dau cach, sau thi phai co 1 dau cach
int count(char a[]){
    int dem=0;
    int len = strlen(a);
    for(int i=0; i<len; i++){
        if((a[i]=='.'||a[i]==','||a[i]==':'||a[i]==';') && (a[i+1]!=' ') && (a[i+1]!='.'&&a[i+1]!=','&&a[i+1]!=':'&&a[i+1]!=';')){
            dem++;
        }
    }
    return dem;
}

void deleteSpace(char a[]){
    int i, j=0, len=strlen(a);
    for(i=0; i<len; i++){
        if(a[i]=='.'||a[i]==','||a[i]==':'||a[i]==';'){
            if(a[i-1]==' '){  
                strcpy(&a[i-1], &a[i]);
            }
        }
    }
}

void addSpace(char a[], char p[], int num){
    int j=0, len=strlen(a);
    for(int i=0; i<len; i++){ 
        p[j++]=a[i];
        if((a[i]=='.'||a[i]==','||a[i]==':'||a[i]==';') && (a[i+1]!=' ') && (a[i+1]!='.'&&a[i+1]!=','&&a[i+1]!=':'&&a[i+1]!=';')) {
            p[j++]=' ';
        }
    }
    p[len + num]='\0';
}

int main(){
    char a[1000];
    printf("\nNhap vao xau ki tu: "); scanf("%[^\n]s", a); 
    int num = count(a);
    int len= strlen(a);
    int len_p = len + num;
    char p[len_p];
    removeSpaces(a);
    deleteSpace(a);
    addSpace(a,p,num);
    capitalize(p);
    printf("\n%s", p);
}