#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main (){
int m,n;

   cout<<"Multiplicancion entre matrices"<<endl; 
   cout<<"ingrese el numero de filas"<<endl;
   cin>>m;
   cout<<"ingrese el numero de columnas"<<endl;
   cin>>n;
   
   int mat1 [m][n], mat2 [m][n];
   
   cout<<"La matriz 1 es: "<<endl;
      for(int x=0; x<m; x++){
         for(int y=0; y<=3; y++){
         	cout<<"ingrese numero: "<<endl;
         	cin>>mat1 [x] [y];
         }
} 

   cout<<"La matriz 2 es: "<<endl;
      for(int x=0; x<=m; x++){
         for(int y=0; y<=3; y++){
         	cout<<"ingrese numero: "<<x<<endl;
         	cin>>mat2 [x] [y];
         }
} 
  cout<<"La matriz 1 rellenada es: "<<endl;
      for(int x=0; x<=m; x++){
         for(int y=0; y<=3; y++){
         	cout<<"ingrese numero: "<<endl;
         	cin>>mat1 [x] [y];
         }
         cout<<""<<endl;
} 

  cout<<"La matriz 2 rellenada es: "<<endl;
      for(int x=0; x<=m; x++){
         for(int y=0; y<=3; y++){
         	cout<<"ingrese numero: "<<endl;
         	cin>>mat2 [x] [y];
         }
         cout<<""<<endl;
     }
         cout<<" el resultado de la multiplicacion es: "<<endl;
		  for(int x=0; x<=m; x++){
         for(int y=0; y<=3; y++){
         	cout<< mat1[x] [y] * mat1[x] [y] ;
         }
         cout<<""<<endl;
         }


 return 0;
}

