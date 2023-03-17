#include <stdio.h>

int main(){
	int n, dem=0, sum=0;
	do{
		scanf("%d", &n);
	}while(n<0);
	int i=n;
	for(; i>0; i--){
		if(i%2==0){
			dem++;
			sum+=i;
		}
		if(dem>3){
			break;	
		}
	}
		printf("%d", sum);
}
