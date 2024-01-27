#include <stdlib.h>
#include <iostream>
using namespace std;


 void cargarDatos(int, int[]);
 void mostrarDatos(int, int[]);
 void ordenarDatos(int, int[]);
  int validar(int);
  
  //Programa que ingrese en un arreglo 10 n?meros 
int main()
{
	int t;
    cout<<"Ingrese el tama?o del vector";
    cin>>t;
    t=validar(t);
    int numeros[t];
    cargarDatos(t,numeros);
    mostrarDatos(t,numeros);
    ordenarDatos(t,numeros);
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
			
void ordenarDatos(int ta,int numeros[]){
         int x,a,aux;
		  for (x=1;x<ta;x++)
            { 
             for (a=x+1;a<=ta;a++)
            { 
               if(numeros[x]>numeros[a]){
               	 aux=numeros[x];
               	 numeros[x]=numeros[a];
               	 numeros[a]=aux;
			   }
        }
    }
}
    
    void cargarDatos(int ta,int numeros[]){
         int x;
           
            for (x=1;x<=ta;x++)
            {
                 cout<<"Ingrese el n?mero"<<x<<endl;
                 cin>>numeros[x];
    }
}
    
    void mostrarDatos(int ta,int numeros[]){
           int x;
            for (x=1;x<=ta;x++)
            {
          cout<<"["<<numeros[x]<<"]";
    }
    cout<<endl;
           
       
   
}
