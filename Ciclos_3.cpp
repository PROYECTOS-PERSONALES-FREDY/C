#include<iostream>
#include<conio.h>
/*
	Determinar si un número ingresado por el usuario es primo. Recuerde que un número
	primo solo es divisible por 1 y por el mismo, no puede tener más divisores.
*/
using namespace std;
int main(){
int n,opcion,l=0;
cout<<"Para comenzar digite el numero (1) de lo contrario coloque cualquier otro numero"<<endl;
cin>>opcion;

while(opcion==1){
l=0;
cout<<"Digite el numero "<<endl;
cin>>n;
 for(int i = 1; i <= n; i++){
	if((n % i) == 0){
	l++;	
		}
	}
	if(l<=2){
	cout<<"El numero "<<n<<" es primo "<<endl;
	}else{
	cout<<"El numero "<<n<<" no es primo"<<endl;
	}
		cout<<"Desea continuar? Si desea continuar ponga (1) de lo contrario ponga cualquier otro número"<<endl;
cin>>opcion;
}

}
