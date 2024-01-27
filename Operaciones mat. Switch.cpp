#include"stdlib.h"
#include"conio.h"
#include<stdio.h>
int main (){
	inicio: system("");
	    float a,b,c,d; 
		char op;
	    
	    printf("Programa operaciones arimeticas\n");
	    printf("Digite primer numero\t"); 
		scanf("%f",&a);
	    printf("\nDigite segundo numero\t"); 
		scanf("%f",&b);
	    printf("\nDigite operacion\n(+)Suma\n(-)Resta\n(/)Division\n(*)Multiplicacion\nDigite operacion\t");
    	op=getche();
    	
    	switch(op){
    		
    		case '+':
				printf("\n %.2f + %.2f = %.2f\n",a,b,a+b);
    		        break;
    		case '-':
				printf("\n %.2f + %.2f = %.2f\n",a,b,a-b);
    		        break;
    		case '*':
				printf("\n %.2f + %.2f = %.2f\n",a,b,a*b);
    		        break;		        
    	    case'/':
					if(b==0)
    	            	printf("\n No se puede dividir por 0\n");
    	       		else
    	            	printf("\n %.2f / %.2f =%.2f\n",a,b,a/b);
    	        	break;
            default:printf("\nNo es operador valido\n");
		}
		printf ("Si desea voler a empezar coloque (1) si no coloque (0) \t");
		scanf ("%f",&d);
		if (d==1)
			goto inicio;
		//return 0;
}
