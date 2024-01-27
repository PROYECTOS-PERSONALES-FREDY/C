#include<iostream>
#include<conio.h>

/* A un hospital ingresan varias personas enfermas, pero el hospital nos pide determinar
cuántos están enfermos de gripa pues los síntomas son dolor de cabeza, fiebre y dolor de
huesos. Cuantos están enfermos del corazón, los síntomas son: adormecimiento del brazo
dolor en el pecho, y cuantos están enfermos de migraña los síntomas son: vista borrosa,
dolor de cabeza y nauseas.

*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

int edad,o=0,opcion=0,c=0,c1=0,c2=0;
char nombre[30];

do{
cout<<"¿Cómo es su nombre?"<<endl;
cin>>nombre;
cout<<"¿Cuántos años tiene?"<<endl;
cin>>edad;
if(edad>=0 && edad<=110){
cout<<"¿Elija sus síntomas? Digite el código de los sín tomas correspondientes"<<endl;
cout<<""<<endl;
cout<<"* Dolor de cabeza, fiebre y dolor de huesos (Código: 1)"<<endl;
cout<<"* Adormecimiento del brazo y dolor de pecho (Código: 2)"<<endl;
cout<<"* Vista borrosa, dolor de cabeza y nauseas (Código: 3)"<<endl;
cout<<"* Ninguna (Código: 4)"<<endl;
cin>>opcion;
cout<<""<<endl;
cout<<""<<endl;
switch(opcion){
	case 1: cout<<"Usted ha ingresado por gripa"<<endl; 
			c++;
	break;
	case 2: cout<<"Usted ha ingresado por enfermedad en el corazón"<<endl;
			c1++;
	break;
	case 3: cout<<"Usted ha ingresado por migraña"<<endl;
			c2++;
	break;
	default: cout<<"Usted no ha elegido ninguna opcion o la opcion escogida es incorrecta."<<endl;
}
cout<<""<<endl;	
cout<<"Para continuar digite el número 1. De lo contrario digite cualquiera otro número."<<endl;
cin>>o;
}else{
	cout<<"La edad no puede ser negativa o mayor que 110."<<endl;
	cout<<""<<endl;
}
}while(o==1);
	cout<<"Un total de: "<<c<<" ingresaron por gripa"<<endl;
	cout<<"Un total de: "<<c1<<" ingresaron por una enfermedad en el corazón"<<endl;
	cout<<"Un total de: "<<c2<<" ingresaron por migraña"<<endl;
}




