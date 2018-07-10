#include<stdio.h>


int main(int argc, char const *argv[])
{
    int a,b,c,d;
	do{
    printf("nhap so co 3 chu so: ");
	scanf("%d",&d);
        
    }
    while(d<100 || d>999);
    
	
	int temp;
	a= d/100;   // tách d ra thành 3 chữ số a,b,c
	b= (d - (a*100))/10;
	c= (d - (a*100) - b*10);
	
	if(a<b){  // doi cho a,b
        temp=a;
        a=b;
        b=temp;
    }
 
    if(a<c){    // doi vi tri a,c
        temp=a;
        a=c;
        c=temp;
    }
   if(b<c){     // doi vi tri b,c
        temp=b;
        b=c;
        c=temp;
    }
	
 
    printf("\n%d%d%d", a, b, c);
    return 0;
}
