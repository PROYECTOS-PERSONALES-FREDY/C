#include<iostream>
#include<conio.h>

/*>) Mostrar los números pares de n números ingresados por el usuario.

*/
using namespace std;
int main(){
	int n ;
	
	cout<<"ingrese el valor de n:"<<endl;
	cin>> n;
	
	for(int p=2; p <= n ; p+=2)
	cout << p << " ";
	
		getch();
	return 0;
}
