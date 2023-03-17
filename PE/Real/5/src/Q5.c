#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
    system("cls");
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int a[100], n;
	int dem, sum=0;
	do{
		scanf("%d", &n);
	}while (n<=0);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int j=0; j<n; j++){
		if(abs(a[j])%2!=0){
			sum+=a[j];
			dem++;
		}
	}
	






    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(dem!=0){
		printf("%d", sum);
	}
	else printf("odd numbers do not exist");







    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}