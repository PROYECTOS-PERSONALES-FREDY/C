#include<iostream>
#include<conio.h>

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

/*

	Determinar la cantidad de personas que obtuvieron un descuento del 20% por compras en
	un establecimiento, tenga en cuenta que el descuento solo se aplica para compras
	superiores a $50.000
  
*/

int pago=0,desc,total;
cout<<"¿Cuánto tiene qué pagar?"<<endl;
cin>>pago;
do{
if(pago>50000 && pago<10000000){
desc=pago*0.2;
total=pago-desc;
cout<<"Usted tiene un descuento del 5% por lo tanto su total a pagar son $"<<total<<""<<endl;	
}else if(pago>500 && pago<=50000){
cout<<"Usted no tiene descuento: $"<<pago<<""<<endl;
}else{
cout<<"Los datos no son validos"<<endl;	
}
cout<<"¿Cuánto tiene qué pagar? (Si desea terminar el proceso digite el número 0)"<<endl;
cin>>pago;
}while(pago>0 && pago<=10000000);
}

