#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char a[100];
	printf("nhap vao 1 xau ki tu: \n");
	gets(a);
	printf("xau ki tu sau khi bi dao:\n");
	for(int i=strlen(a)-1;i>=0;i--){
		printf("%c",a[i]);
	}
	getch();
    return 0;
}
