/*Nguyễn Anh Quân - SE1708
WS3: Tìm các số Amstrong < 5000. Biết rằng số Amstrong là số có tổng bậc 3 của các
chữ số bằng chính nó*/

#include <stdio.h>
#include <math.h>
int main()
{
	printf("\nCac so Amstrong be hon 5000 la: ");
	for (int i=0; i<5000; i++)
	{
		int n = i;
		//tìm ra các chữ số của số đó
		int hangDonVi = n%10;
		n /= 10;
		int hangChuc = n%10;
		n /= 10;
		int hangTram = n%10;
		n /= 10;
		int hangNghin = n%10;
		//kiem tra xem so do co phai so Amstrong ko?
		if ((pow(hangDonVi,3)+pow(hangChuc,3)+pow(hangTram,3)+pow(hangNghin,3)) == i)
			printf("%d   ",i);
	}
}