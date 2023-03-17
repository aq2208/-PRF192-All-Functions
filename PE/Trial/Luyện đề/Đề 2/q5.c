/*Your program allows users to enter array of n integers, where n is entered by the user (n<10)
The program removes all duplicated odd numbers (keep only the first occurence of the numbers
Then, the program prints the resultant list of numbers(after removing the duplicated ones)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int nhapMang(int a[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}

int main() {
    system("cls");
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int a[15], n;
    do{
        scanf("%d", &n);
    }while (n<0 || n>=10);
    nhapMang(a, n);
    /*for (int i = 1; i < n; i++){
		for (int j = 0; j < i; j++){
            if(a[j]%2==1){
                if (a[i] == a[j]){
				    for (int k = i; k < n; k++){
                        a[k] = a[k + 1];
                        n--;
                        i--;
				    }
			    }
            }
			
		}
	}*/








    //Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    for(int i=0; i<n; i++){
        printf("%d\n", a[i]);
    }








    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return 0;
}