#include<iostream>
#include<conio.h>

/*
 Enunciado: Mostrar los divisores de un n�mero ingresado por el usuario.

*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
int n,o;

cout<<"Para terminar el proceso digite un n�mero negativo o el cero."<<endl;
cout<<"De lo contrario digite solo numeros positivos."<<endl;
cout<<""<<endl;
do{
cout<<"Ingrese un n�mero"<<endl;
cin>>n;
cout<<"Divisores:  "<<endl;
for(int i=1;i<=n; i++){
	if(n%i==0){
		cout<<"* "<<i<<""<<endl;
	}
}
cout<<""<<endl;
}
while(n>0);
if(n<=0){
	cout<<"Como digito un n�mero negativo o el cero, se termina el proceso.";
}

}
