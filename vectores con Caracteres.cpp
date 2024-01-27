#include<iostream>

using namespace std;

int main(){
	
	char a[5],b[5];
	
	cout<<"Ingrese caracteres del vector 1"<<endl;
	
	for(int i=0;i<5;i++){
		
		cin>>a[i];
	}
	cout<<"Ingrese caracteres del vector 2"<<endl;
	for(int k=0;k<5;k++){
		cin>>b[k];
	}
	cout<<endl;
	for (int i=0;i<5;i++){
	cout<<a[i]<<endl;
	}
	for (int k=0;k<5;k++){
	cout<<b[k]<<endl;
	}

	return 0;
}
