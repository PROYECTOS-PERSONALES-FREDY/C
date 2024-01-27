#include<iostream>
#include<conio.h>
/*
	Realice un programa que muestre el nombre de las personas que llegaron a
	un hospital enfermas de gripa, pero también debe mostrar la edad y el estrato
	de las personas que ingresaron por lecciones personales y debe mostrar el
	nombre y la edad de los ancianos (mayores a 70 años ) que ingresan al
	hospital por desnutrición..
*/
using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
char nombre[50];
int edad,opcion=0,estrato,o,c=0,c1=0,c2=0;

cout<<"Para empezar digite el número 1"<<endl;
cin>>o;
do{
cout<<"¿Cómo es su nombre?"<<endl;
cin>>nombre;
cout<<"¿Cuántos años tiene?"<<endl;
cin>>edad;
if(edad>=0 && edad<=110){
cout<<"¿Cuál es su estrato?"<<endl;
cin>>estrato;
if(estrato>0 && estrato<12){
cout<<"¿Cuál es su enfermedad? Digite el código de la enfermedad correspondiente"<<endl;
cout<<""<<endl;
cout<<"* Gripa (Código: 1)"<<endl;
cout<<"* Desnutrición (Código: 2)"<<endl;
cout<<"* Lecciones personales (Código: 3)"<<endl;
cout<<"* Ninguna (Código: 4)"<<endl;
cin>>opcion;
cout<<""<<endl;
cout<<""<<endl;
switch(opcion){
	case 1: cout<<"Usted ha ingresado por gripa"<<endl;
	break;
	case 2: cout<<"Usted ha ingresado por desnutrición"<<endl;
	break;
	case 3: cout<<"Usted ha ingresado por lesiones personales"<<endl;
	break;
	default: cout<<"Usted no ha elegido ninguna opcion o la opcion escogida es incorrecta."<<endl;
}
if(opcion==1){
	cout<<nombre<<" ha ingresado por gripa"<<endl;
	c++;
}else if(opcion==2 && edad>70){
	cout<<nombre<<" con una edad de "<<edad<<" ha ingresado por desnutrición"<<endl;
	c1++;
}else if(opcion==3){
	cout<<nombre<<" con una edad de "<<edad<<" y un estrato "<<estrato<<" ha ingresado por lesiones personales"<<endl;
	c2++;
}
cout<<"Para continuar digite el número 1. De lo contrario digite cualquiera otro número."<<endl;
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
	cout<<"Un total de: "<<c1<<" ingresaron por desnutrición y tienen más de 70 años"<<endl;
	cout<<"Un total de: "<<c2<<" ingresaron por lesiones personales"<<endl;

}
