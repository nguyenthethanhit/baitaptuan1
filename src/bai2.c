#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    char a[100];
	int chuthuong=0;
	int chuhoa=0;
	printf("nhap 1 xau tu ban phim: \n");
	gets(a); 		// nhap vao 1 xau
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a' && a[i]<='z'){
			chuthuong++;
		}
		if(a[i]>='A' && a[i]<='Z'){
			chuhoa++;
		}
	}
	printf("so ki tu thuong la: %d",chuthuong);
	printf("\nso ki tu hoa la: %d",chuhoa);
	getch();
    return 0;
}
