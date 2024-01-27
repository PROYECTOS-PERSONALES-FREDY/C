#include<iostream>
#include<conio.h>

/*
 Enunciado: Con el fin de incrementar las ventas, el dueño de un almacén decidió lanzar una promoción que consiste en ofrecer un descuento del 
 10% del valor de la compra a quienes compren más de $100.000.  El programa debe solicitar el valor de la compra, calcular el descuento, 
 calcular el valor a pagar y mostrar en pantalla toda la información.
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

double vlrcmp;
cout<<"Digite el valor de compra"<<endl;
cin>>vlrcmp;
if(vlrcmp>=0 && vlrcmp<=10000000){
if(vlrcmp>=100000){
double descuento = vlrcmp*0.1;
double TotalPG = vlrcmp - descuento;	
cout<<"Se le ha hecho un descuento del 10% de su compra ("<<descuento<<") por lo tanto su total a pagar es "<<TotalPG;
}
if(vlrcmp<100000){
cout<<"No se aplica descuento, total a pagar "<<vlrcmp;
}
if(vlrcmp<0 && vlrcmp>10000000)
cout<<"El valor digitado no es válido";
}
}
