#include<iostream>
#include<conio.h>

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

/*
Enunciado: 	Realice un Programa que lea una serie de n�meros por teclado e indique
			cu�l es el mayor y cu�l es el menor de ellos. 
*/

int n,l,la=0,le,o;

do{
	cout<<"Digite un n�mero"<<endl;
	cin>>n;
	if(n>la){
	la=n;;
	}else{
	le=n;	
	}
	cout<<"Desea continuar"<<endl;
	cin>>o;
}while(o==0);
		cout<<"El n�mero mayor es "<<la<<""<<endl;	
		cout<<"El n�mero menor es "<<le<<""<<endl;
		
}
