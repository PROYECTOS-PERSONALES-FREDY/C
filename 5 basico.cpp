#include<iostream>
#include<conio.h>
/*>Enunciado: programa que divida dos numeros
fecha: 4/09/2018
*/
using namespace std;
int main(){
	setlocale(LC_ALL, "spanish");
	float edad;
	cout<<"Ingrese su edad: "<<endl;
	cin>>edad;
	if(edad <=0 ||edad >100){
		cout<<"Error de datos ingresados"<<endl;
	}else{
		if (edad >= 18){
			cout<<"usted es mayor de edad"<<endl;
			
		}else{
			if(edad < 18){
				cout<<"usted es menor de edad"<<endl ;
			}else{
			}
		}
	}

	getch();
	return 0;
}
