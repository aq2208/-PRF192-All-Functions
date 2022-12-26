#include <stdio.h>
#include <string.h>
void removeDuplicate(char name[30][25], int age[30], char name1[30][25], int age1[30] ,int *n);
int nhapxau(char hoten[30][25],int age[30]);
void hien(char hoten[30][25], int age[],int n);
void sx(char hoten[30][25], int age[],int n);
int main(){
	int age[30],age1[30];
	int n;
	char hoten[30][25],hoten1[30][25];		
	n = nhapxau(hoten,age);	
	hien(hoten,age,n);
	removeDuplicate(hoten,age,hoten1,age1,&n);
	hien(hoten1,age1,n);
}

int nhapxau(char hoten[30][25],int age[30]){
	int i=1;
	char name[30];
	do{
		printf("\nNhap ho ten nguoi thu %d: ",i);
		name[0]='\0';
		fflush(stdin);scanf("%[^\n]s",&name);	
		 
		if (name[0] !='\0' ){
			strcpy( hoten[i-1],name);
			printf("\nNhap tuoi nguoi thu %d:  ",i);
			scanf("%d",&age[i-1]);			
		i++;
		}
	}while ( strlen( name)>0);
	return i-1;
}

void hien(char hoten[30][25], int age[],int n){
	printf("\n  \t Ho ten   Tuoi      #");
	for (int i  = 0 ; i < n ; i++){
		if (i==0 ) printf("\n  %s      %d      %d",hoten[i],age[i],n);
		else printf("\n  %s      %d     ",hoten[i],age[i]);
	}
}

void removeDuplicate(char name[30][25], int age[30], char name1[30][25], int age1[30] ,int *n){
	int n1=0;
	int find=0;
	for (int i = 0;i<*n;i++){
		find=0;
		for (int j=0;(j<n1) && (find==0);j++){
			if (strcmp(name[i], name1[j])==0 ) find=1;
		}
		if (find==0) {
			strcpy(name1[n1],name[i]);
			age1[n1]=age[i];
			n1++;
		} 
	}
	*n=n1;
}

