#include<iostream>
#include<conio.h>

/* Mostrar el nombre de los n empleados de una empresa que ganan entre 3 y 4 salarios
mínimos.
 */

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
double salario,lol,en;
int c=0;
string nombre;
cout<<"Digite (1) cuando ingrese un empleado y (0) cuando no ingrese ningún otro empleado"<<endl;
cin>>en;	
while(en==1){	
cout<<"¿Cuál es su nombre?"<<endl;
cin>>nombre;
cout<<"Escriba su salario"<<endl;
cin>>salario;
if(salario>=828116 || salario<=100000000){
	lol=salario/828116;
	if(lol>=1 && lol<=100){
		if(lol>=3 && lol<=4){
		c=c+1;
		cout<<nombre<<" tiene un salario de 3-4 salarios mínimos"<<endl;
		}		
		}else{
		cout<<"Usted no puede ganar menos de 0 o mas de 100 salarios minimos"<<endl;
		}
}else{
cout<<"El valor digitado no es valido"<<endl;
}
cout<<"Digite (1) cuando ingrese un empleado y (0) cuando no ingrese ningún otro empleado"<<endl;
cin>>en;
}
cout<<"Hay "<<c<<" empleado(s) con 3-4 salarios mínimos"<<endl;	
}



