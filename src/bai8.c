#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char a[100];
	gets(a);
	for(int i=strlen(a)-1;i>=0;i--){
		printf("%c",a[i]);
	}
    return 0;
}
