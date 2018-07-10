#include<stdio.h>
#include<conio.h>
#include<math.h>
int tinh(int m){
	float gia;
	if(m<=1000){
		gia = 10000;
	}
	if(m>1000 && m<=30000){
		gia = (float)(10000+(m-1000)*7.5);
	}
	if(m>30000){
		gia = (float)(227.5+(m-30000)*8);
	}
	return gia;
}

int main(int argc, char const *argv[])
{
    int m;
	float gia;
	printf("nhap quang duong: ");
	scanf("%d",&m);
	gia = tinh(m);
	printf("%f",gia);
    return 0;
}
