#include<iostream>
#include<conio.h>
/*
	Mostrar la tabla de multiplicar de un número ingresado por el usuario
*/
using namespace std;
int main(){
int n, i, p, opcion;

cout<<"Para empezar digite el numero 1"<<endl;
cin>>opcion;

do{
cout<< "ingrese un numero"<<endl;
cin>> n;

for (int i=1; i <=10; i++) {
	p= n*i;
	cout<<n<< "  *  "<<i<<" = "<<p<<endl;
}
cout<<"Si desea continuar digite 1. De lo contrario cualquier otro numero"<<endl;
cin>>opcion;
}
while(opcion==1);
}
