#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
	float a,b,c,x1,x2,x3,h,i;
	printf("Programa para calcular la solucion de la funcion cuadratica:\nax^2+bx+c\nIngrese valor de a\n");
	scanf ("%f",&a);
	printf("\nIngrese valor de b\n");
	scanf ("%f",&b);
	printf("\nIngrese valor de c\n");
	scanf ("%f",&c);
	h=(b*b)-(4*a);
	i=(2*a);
		if (i==0){
			printf("\nNo tiene solucion cuadratica");	
		}
		else{
			if (h<0){
				
				x1=((-b)/i);
				x3=(sqrt(-h))/i;
				printf("valor de x1:\t%.2f + %.2fi \n",x1,x3);
				printf("valor de x2:\t%.2f - %.2fi ",x1,x3);
			}
			else{
				x1=(-b+(sqrt(h)))/i;
				x2=(-b-(sqrt(h)))/i;
				if (x1==x2)
				printf("valor de x:\t%.2f\n",x1);
				else{
				printf("valor de x1:\t%.2f\n",x1);
				printf("valor de x2:\t%.2f",x2);
				}
			}
		}
}
