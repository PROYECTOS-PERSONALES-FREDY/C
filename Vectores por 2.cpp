#include<iostream>

using namespace std;

int main(){
	
	int vec1[5],vec2[5];
	
	cout<<"Digite su vector (5 numeros)"<<endl;
	for(int i=0;i<5;i++){
		cin>>vec1[i];
	}
	cout<<"Su multiplicacion por 2 es:"<<endl;
	for(int i=0;i<5;i++){
		cout<<vec1[i]*2<<endl;
	}
	return 0;
}
