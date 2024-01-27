#include<iostream>
#include<conio.h>
/*
	Crear un programa que escriba dos columnas de números, en la primera se
	colocan los números del 1 al 100, en la segunda el valor del primer valor
	elevado al cuadrado	
*/
using namespace std;
int main(){
setlocale(LC_ALL, "spanish");	
int det=1;
cout<<"Normal:      Doble:     "<<endl;
for(int fila=1;fila<=100;fila++){
	for(int col=1; col<=fila;col++){
        	det=col*col; 	
}
		
        cout<<fila<<"             "<<det<<"  "<<endl;

}


}
