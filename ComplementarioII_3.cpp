#include<iostream>
#include<conio.h>

/* A un hospital ingresan varias personas enfermas, pero el hospital nos pide determinar
cu�ntos est�n enfermos de gripa pues los s�ntomas son dolor de cabeza, fiebre y dolor de
huesos. Cuantos est�n enfermos del coraz�n, los s�ntomas son: adormecimiento del brazo
dolor en el pecho, y cuantos est�n enfermos de migra�a los s�ntomas son: vista borrosa,
dolor de cabeza y nauseas.

*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

int edad,o=0,opcion=0,c=0,c1=0,c2=0;
char nombre[30];

do{
cout<<"�C�mo es su nombre?"<<endl;
cin>>nombre;
cout<<"�Cu�ntos a�os tiene?"<<endl;
cin>>edad;
if(edad>=0 && edad<=110){
cout<<"�Elija sus s�ntomas? Digite el c�digo de los s�n tomas correspondientes"<<endl;
cout<<""<<endl;
cout<<"* Dolor de cabeza, fiebre y dolor de huesos (C�digo: 1)"<<endl;
cout<<"* Adormecimiento del brazo y dolor de pecho (C�digo: 2)"<<endl;
cout<<"* Vista borrosa, dolor de cabeza y nauseas (C�digo: 3)"<<endl;
cout<<"* Ninguna (C�digo: 4)"<<endl;
cin>>opcion;
cout<<""<<endl;
cout<<""<<endl;
switch(opcion){
	case 1: cout<<"Usted ha ingresado por gripa"<<endl; 
			c++;
	break;
	case 2: cout<<"Usted ha ingresado por enfermedad en el coraz�n"<<endl;
			c1++;
	break;
	case 3: cout<<"Usted ha ingresado por migra�a"<<endl;
			c2++;
	break;
	default: cout<<"Usted no ha elegido ninguna opcion o la opcion escogida es incorrecta."<<endl;
}
cout<<""<<endl;	
cout<<"Para continuar digite el n�mero 1. De lo contrario digite cualquiera otro n�mero."<<endl;
cin>>o;
}else{
	cout<<"La edad no puede ser negativa o mayor que 110."<<endl;
	cout<<""<<endl;
}
}while(o==1);
	cout<<"Un total de: "<<c<<" ingresaron por gripa"<<endl;
	cout<<"Un total de: "<<c1<<" ingresaron por una enfermedad en el coraz�n"<<endl;
	cout<<"Un total de: "<<c2<<" ingresaron por migra�a"<<endl;
}




