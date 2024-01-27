#include<iostream>
#include<stdio.h>
#include<cmath>
main(){
	int n,m,p;
	printf("Digite los segundos a calcular\t");
	scanf("%i",&n);
	if (n>=0 & n<86400)
	{
		m = (n/3600);
	    n = n % 3600;
		p = (n/60);
		n = n%60;
		if (m>=0 && m<10)
		{ 
		printf ("0%i",m);
		printf (":");
		}
		else
		{
		printf ("%i",m);
		printf (":");	
		}
		if (p>=0 && p<10)
		{
		printf ("0%i",p);
		printf (":");
		}
		else
		{
		printf ("%i",p);
		printf (":");
		}
		if (n>=0 && n<10)
		{
		printf ("0%i",n);
		}
		else
		{
		printf ("%i",n);	
		}
	}
    else
	{
		printf("\nNo es operador valido");
	}
}
