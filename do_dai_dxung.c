/*Cho trước mảng số A[n]. Tìm độ dài đoạn đối xứng (số đầu tiên bằng số cuối cùng, số thứ
hai bằng số đứng trước số cuối cùng...) dài nhất của mảng A.
Hãy in mảng ban đầu và kết quả tìm được ra màn hình
 
Ví dụ: 1 2 2 1 3 5 4 6 5 6 4
thì các đoạn đối xứng sẽ là 1221; 22; 46564; 656 và đoạn dài nhất là 46564

ý tưởng: xét số đầu dãy, tìm xem trong dãy có số nào bằng số đó ko, nếu có thì xét xem 
trong đoạn giữa 2 số bằng nhau đó có phải là đoạn đối xứng ko*/
 
#include <stdio.h>
int nhapMang(int A[100], int n){
	for (int i=0; i<n; i++){
		printf("A[%d] = ", i); scanf("%d", &A[i]);
	}
} 

int xuatMang(int A[100], int n){
	printf("\nMang co %d phan tu la: ", n);
	for(int i=0; i<n; i++){
		printf("%d ", A[i]);
	}
}

//kiểm tra đoạn đang xét có đối xứng hay ko
int kiemTraDoiXung(int A[100], int start, int stop){
	int l = (stop-start)/2; //chỉ cần xét trên 1 nửa đoạn thôi
	for(int i=0;i<l;i++){
		if(A[start+i] != A[stop-i]) return 0;
	}
	return 1;
}

int main(){
	int A[100], n;
	printf("\nNhap vao so phan tu cua mang: "); scanf("%d", &n);
	nhapMang(A, n);
	xuatMang(A, n);
	//tìm đoạn có khả năng đối xứng
	int test=0, max_length=0, position=0;
	for(int i=0; i<n; i++){
		for(int j=n-1; j>i; j--){ 
		/*sdung 2 vòng lặp, 1 vòng xét từ trái sang, 1 vòng từ phải sang 
		và 2 vòng này ko bao h cắt nhau*/
			if(A[i]==A[j]){
				test = kiemTraDoiXung(A, i, j); //i là điểm đầu đoạn, j là cuối đoạn
				if(test>0){
					if((j-i+1)>max_length){  //j-i+1 là độ dài đoạn [i,j]
						max_length = j-i+1;
						position = i;
					}
				}
			}
		}
	}
	if(max_length>0){
		printf("\nDo dai doan doi xung dai nhat la tu %d den %d:", position, position+max_length-1);
		for(int i=position; i<=position+max_length-1; i++)
			printf(" %d", A[i]);
	}
}