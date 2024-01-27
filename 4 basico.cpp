#include<iostream>
#include<conio.h>
/*>Pedir al usuario dos números e indicar si el segundo es múltiplo del primero. 

*/
using namespace std;
int main(){
	setlocale(LC_ALL, "spanish");
    int n1, n2, modulo;  
	cout<<"ingrese el primer numero: "<<endl;
	 cin>> n1;
	 cout<<"ingrese el segundo numero: "<<endl;
	 cin>> n2;
	 modulo=(n2 % n1);
	   if (modulo == 0){
	   	 cout<<"el numero 2 es multiplo del numero 1"<<endl;
	   } else 
	   	 if (modulo > 0){
	   	 cout<<"el numero 2 no es multiplo del numero 1"<<endl;
	   }
	  
  
	 
		getch();
	return 0;
}
