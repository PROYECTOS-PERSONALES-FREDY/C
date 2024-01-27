#include<iostream>
#include<conio.h>
/*
	Realice un programa que muestre los divisores de 2, 3 y 7, de una lista de
	números ingresados por el usuario.
*/
using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
int n;
cout<<"Ingrese un número"<<endl;
cin>>n;
do{
if(n%2==0){
	cout<<n<<" es divisible por 2"<<endl;
}
if(n%3==0){
	cout<<n<<" es divisible por 3"<<endl;
}
if(n%7==0){
	cout<<n<<" es divisible por 7"<<endl;
}
if(n%7!=0 && n%3!=0 && n%2!=0){
	cout<<n<<" no es divisor ni de 2,3 o 7"<<endl;	
}
cout<<"Ingrese un número. Si desea terminar el proceso digite 0."<<endl;
cin>>n;
}
while(n>0);
}
