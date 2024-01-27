#include<iostream>
#include<conio.h>

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

/*
Enunciado: 	Realice un Programa que lea una serie de números por teclado e indique
			cuál es el mayor y cuál es el menor de ellos. 
*/

int n,l,la=0,le,o;

do{
	cout<<"Digite un número"<<endl;
	cin>>n;
	if(n>la){
	la=n;;
	}else{
	le=n;	
	}
	cout<<"Desea continuar"<<endl;
	cin>>o;
}while(o==0);
		cout<<"El número mayor es "<<la<<""<<endl;	
		cout<<"El número menor es "<<le<<""<<endl;
		
}
