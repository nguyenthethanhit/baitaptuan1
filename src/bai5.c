#include<stdio.h>
#include<conio.h>
int KiemTraNamNhuan(int nam){
	if((nam % 4 == 0 && nam % 100 !=0 )|| (nam%400==0)){
		return 1;
	}
	return 0;
}

int SoNgayToiDa(int ngay, int thang, int nam){
	int SoNgayMax;
	switch(thang){
		case1: case 3: case 5: case 7: case 8: case 10: case 12:
			SoNgayMax = 31;
			break;
		case 4: case 6: case 9: case 11:
			SoNgayMax = 30;
			break;
		case 2:
			if(KiemTraNamNhuan(nam)==1){
				SoNgayMax = 29;
			}
			else{
				SoNgayMax = 28;
			}	
	}
	return SoNgayMax;
}

int KiemTra(int ngay, int thang, int nam){
	int SoNgayMax = SoNgayToiDa(ngay,thang,nam);
	if(ngay=0 || ngay>SoNgayMax){
		printf("ngay khong hop le");
	}
	else{
		printf("ngay hop le");
		if(KiemTraNamNhuan(nam)==1){
			printf("\nnam nhuan");
		}
		else{
			printf("\nkhong phai nam nhuan");
		}
	}
}


int main(int argc, char const *argv[])
{
    int ngay,thang,nam;
	printf("nhap ngay: ");
	scanf("%d",&ngay);
	printf("nhap thang: ");
	scanf("%d",&thang);
	printf("nhap nam: ");
	scanf("%d",&nam);
	KiemTra(ngay,thang,nam);
    return 0;
}
