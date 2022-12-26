// nhap vao 1 xau, tim so lan xuat hien cua cac ki tu trong xau
#include <stdio.h>
#include <string.h>

int main(){
	char s[51],s1[50];
	int len,dem;
	printf("\nNhap vao mot xau ky tu: ");scanf("%[^\n]s",s);
	strcpy(s1,s);
	len= strlen(s);
	for (int i = 0; i < len;i++){
		if (s1[i] !=' ' )	{		
			dem=1;
			for (int j = i+1; j < len ;j++){
				if ( ( s1[j] == s1[i])  && (s1[j]!=' ' )) {
					dem++; s1[j]=' ';
				}
			}
			 printf("\n%c xuat hien %d lan ",s1[i],dem);
		}
	}
}

