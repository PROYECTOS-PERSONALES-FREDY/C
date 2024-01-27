#include<iostream>

using namespace std;

int main (){
	
	int a;
	
	do{
		cout<<"Ingrese numero a multiplicar\t";
		cin>>a;
	}while((a<1) || (a>10));
	
	for(int i=1;i<=20;i++){
	cout<<a<<" * "<<i<<" = "<<a*i<<endl;
	}
	
}
