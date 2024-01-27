#include<iostream>
#include<conio.h>

/*
 Enuncioado:Roberto tiene una camioneta que consume $100.000 pesos por cada kilómetro , Roberto desea ir de viaje desde Bogotá hasta 
 Medellín y nuevamente devolverse, determine si con lo que tanquea inicialmente la camioneta le alcanza para hacer el recorrido, 
 de no ser así determine con cuánto dinero de más debe tanquera la camioneta y cuál fue el gasto total del viaje.
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

int gc, km, kt, gt, gtc;
cout<<"Ingrese la cantidad de gasolina en galones que tiene la camioneta"<<endl;//Cada 2kms se consume 1 galón de galosina
cin>>gc;
cout<<"Ingrese la cantidad de KM de Bogotá a Medellín"<<endl;
cin>>km;
if(gc>0 && gc<7){
if(km>0 && km<50000){  
gt=(gc*100000)/2;
kt= 100000*km;
gtc=kt-gc;
   cout<< "Roberto tiene que gastar $"<<gtc<<" de mas para poder hacer su viaje de bogota a medellin";
if(gt==0){
   cout<<"Roberto puede viajar de bogota a medellin ida y vuelta con lo que tiene tanqueado";
}
}
else if(km<0 && km>=50000){
	cout<<"Error de datos";
}
}
else if(gc<=0 && gc>=7){
	cout<<"Error de datos";
}
}

