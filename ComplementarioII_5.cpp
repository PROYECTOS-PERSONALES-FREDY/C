#include<iostream>
#include<conio.h>

/* Juan colecciona estampillas y nos pide determinar cu�ntas recolecta durante una semana.
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

int c=0,o=0,opcion;

do{
cout<<"Cantidad de estampillas del d�a lunes: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del d�a martes: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del d�a miercoles: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del d�a jueves: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del d�a viernes: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del d�a sabado: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del d�a domingo: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

if(c>0){
cout<<"En total se recolectaron: "<<c<<" estampillas"<<endl<<endl;

}else{
cout<<"Parece que no recolectaste ninguna estampilla. �Suerte para la pr�xima!"<<endl<<endl;	
}
}else{
cout<<"Cantidad no v�lidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no v�lidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no v�lidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no v�lidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no v�lidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no v�lidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no v�lidad"<<endl<<endl;	
}
c=0;

cout<<"Desea volver a contar estampillas para la pr�xima semana digite 1. De lo contrario cualquier n�mero: ";
cin>>opcion;
}while(opcion==1);
}
