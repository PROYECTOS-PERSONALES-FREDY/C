#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int columnas,filas,columnasb,filasb;
	cout <<"DIgite la cantidad de columnas de la primera  matriz \t";
	cin>>columnas;
	cout <<"DIgite la cantidad de filas de la primera matriz \t";
	cin>>filas;
	
	//primera matriz
 int matriz[columnas][filas],matrizB[columnas][filas];
 cout<<"Ingrese los elementos de la primera matriz \n";
 for(int x=0;x<columnas;x++){
  for(int y=0;y<filas;y++){
   cout<<"Digita un numero ["<<x<<"]["<<y<<"]: ";
   cin>>matriz[x][y]; 
  }
 }
 
  for(int x=0;x<columnas;x++){
  for(int y=0;y<filas;y++){
		cout<<"\t";
		cout<<matriz[x][y];
	}
	cout<<"\n";
}

//Segunda matriz

cout <<"DIgite la cantidad de columnas de la segunda  matriz \t";
	cin>>columnasb;
	cout <<"DIgite la cantidad de filas de la segunda matriz\t";
	cin>>filasb;
cout<<"Ingrese los elementos de la segunda matriz \n";
 for(int x=0;x<columnasb;x++){
  for(int y=0;y<filasb;y++){
   cout<<"Digita un numero ["<<x<<"]["<<y<<"]: ";
   cin>>matrizB[x][y]; 
  }
 }
 
  for(int x=0;x<columnasb;x++){
  for(int y=0;y<filasb;y++){
		cout<<"\t";
		cout<<matrizB[x][y];
	}
	cout<<"\n";
}

//suma de matrices
if (columnas==columnasb & filas==filasb)
{

cout<<"La suma de las dos matrices es \n";
for(int x=0;x<columnas;x++){
  for(int y=0;y<filas;y++){
		cout<<"\t";
		cout<<matriz[x][y]+matrizB[x][y];

	}
	cout<<"\n";
  }

}else 
cout<<"Las matrices no se pueden sumar";
 getch();
 return 0;
}
 

