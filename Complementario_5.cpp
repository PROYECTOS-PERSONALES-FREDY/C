#include<iostream>
#include<conio.h>
/*
	Realice un programa que muestre el nombre de las personas que llegaron a
	un hospital enfermas de gripa, pero tambi�n debe mostrar la edad y el estrato
	de las personas que ingresaron por lecciones personales y debe mostrar el
	nombre y la edad de los ancianos (mayores a 70 a�os ) que ingresan al
	hospital por desnutrici�n..
*/
using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
char nombre[50];
int edad,opcion=0,estrato,o,c=0,c1=0,c2=0;

cout<<"Para empezar digite el n�mero 1"<<endl;
cin>>o;
do{
cout<<"�C�mo es su nombre?"<<endl;
cin>>nombre;
cout<<"�Cu�ntos a�os tiene?"<<endl;
cin>>edad;
if(edad>=0 && edad<=110){
cout<<"�Cu�l es su estrato?"<<endl;
cin>>estrato;
if(estrato>0 && estrato<12){
cout<<"�Cu�l es su enfermedad? Digite el c�digo de la enfermedad correspondiente"<<endl;
cout<<""<<endl;
cout<<"* Gripa (C�digo: 1)"<<endl;
cout<<"* Desnutrici�n (C�digo: 2)"<<endl;
cout<<"* Lecciones personales (C�digo: 3)"<<endl;
cout<<"* Ninguna (C�digo: 4)"<<endl;
cin>>opcion;
cout<<""<<endl;
cout<<""<<endl;
switch(opcion){
	case 1: cout<<"Usted ha ingresado por gripa"<<endl;
	break;
	case 2: cout<<"Usted ha ingresado por desnutrici�n"<<endl;
	break;
	case 3: cout<<"Usted ha ingresado por lesiones personales"<<endl;
	break;
	default: cout<<"Usted no ha elegido ninguna opcion o la opcion escogida es incorrecta."<<endl;
}
if(opcion==1){
	cout<<nombre<<" ha ingresado por gripa"<<endl;
	c++;
}else if(opcion==2 && edad>70){
	cout<<nombre<<" con una edad de "<<edad<<" ha ingresado por desnutrici�n"<<endl;
	c1++;
}else if(opcion==3){
	cout<<nombre<<" con una edad de "<<edad<<" y un estrato "<<estrato<<" ha ingresado por lesiones personales"<<endl;
	c2++;
}
cout<<"Para continuar digite el n�mero 1. De lo contrario digite cualquiera otro n�mero."<<endl;
cin>>o;
}else{
	cout<<"Su estrato no puede ser menor o igual a cero y tampoco mayor a 12."<<endl;
	cout<<""<<endl;
}
}else{
	cout<<"La edad no puede ser negativa o mayor que 110."<<endl;
	cout<<""<<endl;
}
}
while(o==1);
	cout<<"Un total de: "<<c<<" ingresaron por gripa"<<endl;
	cout<<"Un total de: "<<c1<<" ingresaron por desnutrici�n y tienen m�s de 70 a�os"<<endl;
	cout<<"Un total de: "<<c2<<" ingresaron por lesiones personales"<<endl;

}
