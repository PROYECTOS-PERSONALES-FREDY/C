#include <iostream>

using namespace std;

int main(){
	int n,vector[100];
	
	cout<<"Digite cuantos numeros quiere almacenar "<<endl;
	cin>>n;
	
	cout<<"Digite numeros "<<endl;
	
	for (int i=0;i<n;i++){
		cin>>vector[i];	
	}
	cout<<endl;
	for (int i=n-1;i>=0;i--){
		cout<<n<<" -> "<<vector[i]<<endl;
		n--;
	}
	return 0;
}



