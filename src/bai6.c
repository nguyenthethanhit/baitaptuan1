#include<stdio.h>
#include<conio.h>
#include<string.h>
void themphantu(char *a, int vitrithem){
	int n = strlen(a);
	for(int i=strlen(a)-1;i>=vitrithem;i--){
		a[i+1]=a[i];
		
	}
	n++;
}

int main(int argc, char const *argv[])
{
    char a[100];
	int i=0;
	gets(a);
	fflush(stdin);
	// xoa dau cach thua o dau xau
	while(a[0]==' '){
		strcpy(&a[0],&a[1]);
	}
	// xoa ki tu thua o cuoi xau
	while(a[strlen(a)-1]==' '){
		strcpy(&a[strlen(a)-1],&a[strlen(a)]);
	}
    // xoa 2 dau space canh nhau
	for(i=0;i<strlen(a);i++){
		if(a[i]==' '&&a[i+1]==' '){
			strcpy(&a[i],&a[i+1]);
			i--;
		}
	}
	for(i=0;i<strlen(a);i++){
		if(a[i]==','&&a[i+1]!=' '){
			themphantu(a,i+1); // them phan tu vao vi tri a[i+1]
			a[i+1]=' ';		// thêm dau space
		}
	}
	printf("%s",a);

    return 0;
}
