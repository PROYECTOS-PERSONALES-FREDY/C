#include<iostream>

using namespace std;

int main(){
	
	int a,b;
	
	do{
		cout<<"Digite numero\t";
		cin>>a;
		if (a>0){
			b = b + a;
		}
		
	}while (a!=0);	
	
	cout<<"su suma es\t"<<b<<endl;
	return 0;
}


