#include<stdio.h>
#include<conio.h>
int UCLN(int a, int b){
	if(b==0){
		return a;
	}
	return UCLN(b,a%b); //USCLN(a, b) = USCLN(a mod b, b)
}
int BCNN(int a,int b){
	int c = UCLN(a,b);
	int d = (a*b)/c;
	return d;
}

int main(int argc, char const *argv[])
{
    int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	c = UCLN(a,b);
	printf("UCLN cua %d va %d la: %d",a,b,c);
	d = BCNN(a,b);
	printf("\nBCNN cua %d va %d la: %d",a,b,d);
    return 0;
}
