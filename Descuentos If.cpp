#include<iostream>
#include<stdio.h>
#include<cmath>
int main(){
	int  a,b;
		printf("Ingrese Valor a Pagar:\n");
		scanf ("%d",&a);
		if (a>=0)
		{
			if (a<500000) 
				printf ("No hay Descuento");
			else if (a>=500000 & a<=1000000) 
			{
				printf ("Descuento del 5%\n");
				printf ("Su total a pagar es:  ");
				a=a-(a*0.05);
				printf ("%d",a);
			}
					else if (a>1000000 & a<=2000000) 
				{
					printf ("Descuento del 7%\n");
					printf ("Su total a pagar es:  ");
					a=a-(a*0.07);
					printf ("%d",a);
				}
						else if (a>2000000) 
					{
					printf ("Descuento del 10%\n");
					printf ("Su total a pagar es:  ");
					a=a-(a*0.1);
					printf ("%d",a);
					}
					
		}
		else
		{
			printf ("No es un valor valido");
		}
}
