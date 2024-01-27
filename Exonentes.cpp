#include<iostream>

using namespace std;

int main(){
	
	int a,b,c=1,d;
	
	cout<<"Ingrese numero   \t";
	cin>>a;
	cout<<"Ingrese exponente\t";
	cin>>b;
	
		c=a;
	
	while(b>1){
		
		c=c*a;
		b--;
	}
	
	cout<<"Su potencia es: "<<c<<endl;
	
	return 0;
}
