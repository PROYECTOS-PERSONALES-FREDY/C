#include<iostream>
#include<conio.h>
/*>Mostrar los nombres de las personas que obtuvieron un descuento del 5% por pago en un
establecimiento teniendo en cuenta que el descuento se da siempre y cuando las compras
sean superiores a $200.000.

*/
using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
double vcomp, en, desco;
int c=0;
string nombre;
cout<<"Digite (1) para ingresar un nuevo cliente y (0) cuando no hayan mas clientes"<<endl;
cin>>en;	
while(en==1){	
cout<<"¿Cuál es su nombre?"<<endl;
cin>>nombre;
cout<<"Ingrese el valor de sus compras:"<<endl;
cin>>vcomp;
 if(vcomp >= 200000 || vcomp < 1000000){
	desco= (vcomp * 5)/100;
	 if (desco>=1 && desco <=250000){
	    if (desco>=10000 && desco <=250000){
	   	c=c+ c;
		cout<<nombre<<" se aplica el descuento de 5% a su compra "<<endl;
		}
		}else{
			cout<<"usted no puede hacer compras menores de $50 o mas de $1000000"<<endl;
		}
}else{
cout<<"El valor digitado no es valido"<<endl;
}
cout<<"Digite (1) para ingresar un nuevo cliente y (0) cuando no hayan mas clientes"<<endl;
cin>>en;
}
cout<<"a "<<c<<" se les hace efectivo el descuento del 5%"<<endl;	
}
	   	
	   
	
	


