#include<iostream>
#include<conio.h>

/* Mostrar los números comprendidos entre n y z donde n y z son ingresados por el usuario */

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
int z,n;

cout<<"Escriba de que numero a que numero desea que se muestren"<<endl;
cin>>n;
cin>>z;
cout<<"Los numeros son:"<<endl;

for(int i=n;i<=z;i++){
	cout<<" "<<i<<""<<endl;	
}

for(int i=n;i>=z;i--){
	cout<<" "<<i<<""<<endl;	

}
	getch();
	return 0;
}


