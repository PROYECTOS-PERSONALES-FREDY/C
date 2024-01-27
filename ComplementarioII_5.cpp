#include<iostream>
#include<conio.h>

/* Juan colecciona estampillas y nos pide determinar cuántas recolecta durante una semana.
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

int c=0,o=0,opcion;

do{
cout<<"Cantidad de estampillas del día lunes: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del día martes: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del día miercoles: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del día jueves: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del día viernes: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del día sabado: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

cout<<"Cantidad de estampillas del día domingo: ";
cin>>o;	
if(o>=0 && c<10000){
c=c+o;

if(c>0){
cout<<"En total se recolectaron: "<<c<<" estampillas"<<endl<<endl;

}else{
cout<<"Parece que no recolectaste ninguna estampilla. ¡Suerte para la próxima!"<<endl<<endl;	
}
}else{
cout<<"Cantidad no válidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no válidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no válidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no válidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no válidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no válidad"<<endl<<endl;	
}
}else{
cout<<"Cantidad no válidad"<<endl<<endl;	
}
c=0;

cout<<"Desea volver a contar estampillas para la próxima semana digite 1. De lo contrario cualquier número: ";
cin>>opcion;
}while(opcion==1);
}
