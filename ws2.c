/*Nguyễn Anh Quân - SE1708 - ws2

Nhập vào 3 số nguyên tên là d,m,y (day, month, year) là ngày tháng năm bất kỳ.
1. In ra màn hình thông báo nếu một trong các số đó là sai (ví dụ tháng = 13 ngày = 32 chẳng hạn)
2. Cho biết năm vừa nhập có là năm nhuận hay không
3. Cho biết tháng vừa nhập có bao nhiêu ngày
4. Cho biết ngày tháng năm vừa nhập là thứ mấy.*/

#include <stdio.h>
int main() {
	int day, month, year;
	int namNhuan;
	int ngayHopLe;
	printf("\nNhap vao ngay, thang, nam bat ky: "); scanf("%d %d %d",&day,&month,&year);
//yêu cầu 1:
	if (day > 31 || day < 1) {
		printf("\nNgay khong hop le! Vui long nhap lai");
		ngayHopLe = 0; 
	}
	if (month > 12 || month < 1) printf("\nThang khong hop le! Vui long nhap lai");	
	//năm thì không cần bởi năm nhỏ nhất là năm -4712 và không có năm lớn nhất
//yêu cầu 2:
	/*năm nhuận có số năm chia hết cho 4, những năm nào tròn thế kỉ (tức 2 số cuối là 0) 
	phải chia hết cho 400*/
	if ((year%100==0 && year%400==0) || (year%100!=0 && year%4==0)) {
		printf("\nNam %d la nam nhuan", year);
		namNhuan = 1;
	}
	else {
		printf("\nNam %d khong phai la nam nhuan", year);
		namNhuan = 0;
	}
//yêu cầu 3:	
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\nThang %d co 31 ngay", month);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\nThang %d co 30 ngay", month);
			break;
		case 2:
			{
				if (namNhuan == 1) printf("\nThang 2 co 29 ngay");
				if (namNhuan == 0) printf("\nThang 2 co 28 ngay");
				break;
			}
		default: 
			{
				printf("\nVi thang khong hop le nen khong xac dinh duoc so ngay cua thang va ngay la thu may!");
				return 0;
			}
	}
//yêu cầu 4:
	if (ngayHopLe == 0) {
		printf("\nVi ngay khong hop le nen khong xac dinh duoc ngay do la thu may!");
		return 0;
	}
	else 
	{
		int y0= year - (14-month)/12;
		int x = y0 + y0/4 - y0/100 + y0/400;
		int m0 = month + 12*((14 - month)/12) - 2;
		int dayOfWeek = (day + x + 31*m0/12) % 7;
		switch (dayOfWeek)
		{
		case 0:
			printf("\nngay %d/%d/%d la Chu Nhat", day, month, year);
			break;
		case 1:
			printf("\nngay %d/%d/%d la Thu Hai", day, month, year);
			break;
		case 2:
			printf("\nngay %d/%d/%d la Thu Ba", day, month, year);
			break;
		case 3:
			printf("\nngay %d/%d/%d la Thu Tu", day, month, year);
			break;
		case 4:
			printf("\nngay %d/%d/%d la Thu Nam", day, month, year);
			break;
		case 5:
			printf("\nngay %d/%d/%d la Thu Sau", day, month, year);
			break;
		case 6:
			printf("\nngay %d/%d/%d la Thu Bay", day, month, year);
			break;		
		} 
	}
	
		
}