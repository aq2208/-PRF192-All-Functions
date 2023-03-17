#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

bool isPrime(int n){
	int i;
	if (n <2) return false;
	for (i = 2; i <= sqrt(n); i++){
		if (n%i == 0) return false;
	}
	return true;
}

int main() {
    system("cls");
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n;
	int dem =0;
	do{
		scanf("%d", &n);
	}while (n<=0 || n>=100);
	







    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(int i=n; i<=1000 && dem<4; i++){
		if(isPrime(i)){
			printf("%d\n", i);
			dem++;
		}
	}








    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}