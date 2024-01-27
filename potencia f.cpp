#include"stdlib.h"
#include"conio.h"
#include<stdio.h>
int main (){
	int a,b;
	printf ("Digite numero:\n");	
	scanf ("%i",&a);
	printf ("Digite potencia:\n");
	scanf ("%i",&b);
	while (b>0)
	{
		if(b=1){
		b=b-1;
	}
		else{
		a=a*a;
		b=b-1;
	}
	}
	printf ("%i\n",a);
	printf ("%i",b);
}
