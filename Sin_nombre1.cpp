#include <stdio.h>
#include <iostream>
using namespace std;


 void cargarDatos(int,int[]);
 int validar(int);
 void mostrarDatos(int,int[]);
 
  
  //Programa que ingrese en un arreglo 10 n?meros 
int main()
{
	int t;
    cout<<"Ingrese el tama?o del vector";
    cin>>t;
    t=validar(t);
    int numeros[t];//defir el vector
    cargarDatos(t,numeros);
    mostrarDatos(t,numeros);
	system("PAUSE"); 
}
   
int validar(int tam){
  	while(tam<=0){
  		cout<<"Error \n Ingrese tama?o";
  		cin>>tam;
	  }
	  return tam;
  }         
			

    
void cargarDatos(int t,int num[]){
         int x;
           
            for (x=1;x<=t;x++)
            {
                 cout<<"Ingrese el n?mero de la posici?n"<<x<<endl;
                 cin>>num[x];
    }

}
    
void mostrarDatos(int ta,int num []){
           int x;
            for (x=1;x<=ta;x++)
            {
          cout<<"["<<num[x]<<"]";
    }
    cout<<endl;
           
       
   
}
