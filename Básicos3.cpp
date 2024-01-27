#include<iostream>
#include<conio.h>
#include <stdio.h>
#include <math.h>

/*
 Enuncioado: Dadas las coordenadas cartesianas de dos puntos, el programa debe calcular la distancia entre ellos.  En caso que la distancia 
 supere 5 unidades se debe mostrar una mensaje de alerta que diga: "Los puntos son muy lejanos"..
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

double puntox1,puntox2,puntoy1,puntoy2,p,p2,p3,Dis;

cout<<"El valor de x1,y1"<<endl;
cin>>puntox1;
cin>>puntoy1;
cout<<"El valor de x2,y2"<<endl;
cin>>puntox2;
cin>>puntoy2;
p=(puntox1-puntox2)*(puntox1-puntox2);
p2=(puntoy2-puntoy1)*(puntoy2-puntoy1);
p3=p+p2;
Dis=sqrt(p3);
if(Dis>=0 && Dis<=5){
cout<<"Su distancia es: "<<Dis;
}
if(Dis>5){
cout<<"Los puntos son muy lejanos";
}
}
