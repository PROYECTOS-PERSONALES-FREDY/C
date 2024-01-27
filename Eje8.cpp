#include<iostream>
#include<conio.h>
/*
	Mostrar la tabla de multiplicar de un número ingresado por el usuario
*/
using namespace std;
int main(){
int n, i, p;
cout<< "ingrese un numero"<<endl;
cin>> n;

for (int i=1; i <=10; i++) {
	p= n*i;
	cout<<n<< "  *  "<<i<<" = "<<p<<endl;
}
getch();
	return 0;
}
