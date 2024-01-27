#include<iostream>

using namespace std;

int main(){
	
	int n,vector[100],a;
	
	cout<<"Digite numero de elementos del vector "<<endl;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>vector[i];
		
		if (vector[i]>a){
			
			a=vector[i];
			
		}
	}
	cout<<"\nEl mayor numero es :"<<a<<endl;
	return 0;
}
