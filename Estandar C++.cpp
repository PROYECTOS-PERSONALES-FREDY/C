//standard c++

#include<iostream>
#include<math.h>//se usa para operaciones matematicas y trigonometricas
#include<conio.h>//es como iostream pero con diferentes variables y funciones
#include<stdlib.h>// es similar al conio

using namespace std;

int main(){
	
	cout<<"Se usa para escribir texto"<<endl; //El endl o \n se usa para saltar de linea
	
	int    a = 15; 		 //numero enteros
	float  b = 10.45; 	 //numero real
	double c = 16.3456; //se puede guardar numeros reales mas extensos
	char   e = 'K'; 	//se usa entre comillas simples para definir un caracter (solo se puede una letra)
	char   f[10];		//se puede poner [] y un numero dentro para definir de cuantos caracteres quiere el dato q va a introducir
	
	//asi se pone para imprimir la variable
	
	cout<<a<<endl; 
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<e<<endl;
	
	cout.precision (numero de decimales) //se pone antes de imprimir el resultado se pone esto para redondear numeros
	
	sqrt(variable); //se usa para la raiz cuadrada #include<math.h
	pow(variable,elevacion); //se usa para elevar #include<math.h
	
	i++;//es igual a i = i + 1
	i--;//es igual a i = i - 1
	
	getch();//se usa para que el programa finalize cuando uno presiona enter #iclude<conio.h>
	system("pause");// es similar al getch
	
	return 0;
}



