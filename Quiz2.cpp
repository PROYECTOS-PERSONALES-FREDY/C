#include<iostream>
#include<conio.h>

/*
 Enuncioado: Rosa lleva a cabo una fiesta y desea saber si gasto el licor comprado o le quedo. De acuerdo a eso se debe determinar 
 el porcentaje de licor que se le quedo, pues el se�or que se lo vendi� se le recibir�, pero con un costo de 30% menos del valor en 
 que ella lo compro inicialmente, determine cu�nto dinero invirti� en licor para la fiesta y cuanto recupero.
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

int TotalLic,PorLC,TotalPT,LicorS;
cout<<"�Cu�nto dinero gast� en total para el licor?"<<endl;
cin>>TotalLic;
if(TotalLic>=0 && TotalLic<=10000000){
cout<<"�Le sobro licor de la fiesta? Coloque el c�digo correspondiente a la respuesta"<<endl;
cout<<"1 -> Si"<<endl;
cout<<"2 -> No"<<endl;
cin>>LicorS;
if(LicorS==1){
cout<<"�Cu�nto porcentaje de licor le sobr�?"<<endl;
cin>>PorLC;
TotalPT=TotalLic*(PorLC*0.01);
int TotalPon=TotalLic-TotalPT;
int Desc = TotalLic-TotalPT;
TotalPT=TotalPT*0.7;
cout<<"El total de dinero gastado en licor es: "<<TotalPon<<""<<endl;
cout<<"El total de dinero recuperado es:  "<<TotalPT<<""<<endl;
}
if(LicorS==2)
cout<<"Como no sobr� licor, no se recupera nada";
}
if(TotalLic<0 && TotalLic>10000000){
cout<<"Los datos ingresados no son v�lidos";
}
}
