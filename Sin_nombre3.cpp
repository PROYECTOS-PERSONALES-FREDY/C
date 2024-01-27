#include <stdio.h>
#include <iostream>
using namespace std;

int numeros[10];
 void cargarDatos();
 void mostrarDatos();
 void ordenarDatos();
  
  //Programa que ingrese en un arreglo 10 n?meros 
int main()
{
    
    cargarDatos();
    mostrarDatos();
    ordenarDatos();
    mostrarDatos();
    
    system("PAUSE"); 
}
            
			
void ordenarDatos(){
         int x,a,aux;
           
            for (x=1;x<10;x++)
            { 
             for (a=x+1;a<=10;a++)
            { 
               if(numeros[x]>numeros[a]){
               	 aux=numeros[x];
               	 numeros[x]=numeros[a];
               	 numeros[a]=aux;
			   }
        }
    }
}
    
    void cargarDatos(){
         int x;
           
            for (x=1;x<=10;x++)
            {
                 cout<<"Ingrese el n?mero"<<x<<endl;
                 cin>>numeros[x];
    }
}
    
    void mostrarDatos(){
           int x;
            for (x=1;x<=10;x++)
            {
          cout<<"["<<numeros[x]<<"]";
    }
    cout<<endl;
           
       
   
}
