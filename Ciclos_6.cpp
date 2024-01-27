#include<iostream>
#include<conio.h>

/*>) Mostrar los números pares de n números ingresados por el usuario.

*/
using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
int n;

cout<<"Ingrese un número";
cin>>n;

do{
if(n%2==0){
cout<<n<<" es par"<<endl;
}else{
cout<<n<<" no es par"<<endl;
}
cout<<"Ingrese un número. Si no desea continuar digite 0 o un número negativo."<<endl;
cin>>n;
}
while(n>0);
cout<<"Números pares digitados: "<<n<<""<<endl;
}
