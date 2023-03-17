#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int a[100], n;
	int dem=0;
	int true=1;
	do{
		scanf("%d", &n);
	}while(n<=0);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	







    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(int j=0; j<n; j++){
		if(a[j]%5==0){
			if(j!=0){
				for(int b=0; b<j; b++){
					if(a[b]==a[j]){
					true=0;
					}
				}
			}
			if(true!=0){
				dem=1;
				for(int x=j+1; x<n;x++){
				if(a[x]==a[j]) dem++;
				}	
				printf("%d-%d\n", dem, a[j]);
			}
		}	
		dem=0;
		true=1;
	}








    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}