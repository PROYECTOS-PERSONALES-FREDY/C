#include<iostream>
#include<conio.h>

/*>) Mostrar los n�meros pares de n n�meros ingresados por el usuario.

*/
using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
int n;

cout<<"Ingrese un n�mero";
cin>>n;

do{
if(n%2==0){
cout<<n<<" es par"<<endl;
}else{
cout<<n<<" no es par"<<endl;
}
cout<<"Ingrese un n�mero. Si no desea continuar digite 0 o un n�mero negativo."<<endl;
cin>>n;
}
while(n>0);
cout<<"N�meros pares digitados: "<<n<<""<<endl;
}
