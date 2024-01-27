#include<iostream>

using namespace std;

int main (){
	
	int m1[100][100],m2[100][100],m3[100][100],filas1,columnas1,filas2, columnas2;
	
	cout<<"Digite numero de filas de la matriz 1: ";
	cin>>filas1;
	cout<<"Digite numero de columnas de la matriz 1: ";
	cin>>columnas1;
	
	for(int i=0;i<filas1;i++){
		for(int j=0;j<columnas1;j++){
		cout<<"Ingrese numero ["<<i<<"] ["<<j<<"] : ";
		cin>>m1[i][j];
		}
	}
	
	cout<<"Digite numero de filas de la matriz 2: ";
	cin>>filas2;
	cout<<"Digite numero de columnas de la matriz 2: ";
	cin>>columnas2;
	
	for(int k=0;k<filas2;k++){
		for(int l=0;l<columnas2;l++){
		cout<<"Ingrese numero ["<<k<<"] ["<<l<<"] : ";
		cin>>m2[k][l];
		}
	}
	
	
	cout<<"Su multiplicacion es: "<<endl;
	if (columnas1==filas2 ){

		for(int x=0;x<filas1;x++){
			for(int y=0;y<columnas2;y++){
				
			cout<<m3[x][y]=(m1[x][y]*m2[y][x]);
			
			}
		cout<<"\n";
		}
	}
	else{
	
	cout<<"No es posibre realizar la multiplicacion"<<endl;
}
	return 0;
}


