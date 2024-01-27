#include <iostream>
#include <math.h>

using namespace std;

int main(){
 float n, base;
 cout << "Ingrese la base: " << endl;
 cin >> base;
 cout << "Ingrese el exponente" << endl;
 cin >> n;
 int resultado = pow(base,n);
 cout << base << " elevado a la " << n << " es igual a " << resultado << endl;
 return 0;
}
