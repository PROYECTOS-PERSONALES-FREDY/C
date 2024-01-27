#include<iostream>
#include<conio.h>

/* 
 Enunciado: Un colegio llevará a los estudiantes de once de paseo, para ello es necesario los siguientes requisitos :
 a) Tener un promedio final superior a 3.8
 b) Tener ahorrado entre dos y cinco millones de pesos 
 c) Estar vacunado contra el Chikunguña
 d) Tener una edad entre 16 y 18 
 ¿Determine si el estudiante va de paseo o no?
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
	double promedio, dineroah, edad, vacun;
	cout<<"Ingrese su promedio final"<<endl;
	cin>>promedio;
	if(promedio>=0 && promedio<=50){
		if(promedio>38 && promedio <=50){
		cout<<"¿Cuánto dinero tiene ahorrado?"<<endl;
		cin>>dineroah;
			if(dineroah>=0 && dineroah<=5000000){
				if(dineroah>=2000000 && dineroah<=5000000){
					cout<<"¿Se encuentra vacunado contra el chikunguña? Digite el numero al que equivale cada opción"<<endl;
					cout<<"1 -> Si"<<endl;
					cout<<"2 -> No"<<endl;
					cin>>vacun;
					if(vacun>=1 && vacun<=2){
						if(vacun==1){
							cout<<"¿Cuántos años tiene?"<<endl;
							cin>>edad;
							if(edad>=1 && edad<=100){
								if(edad>=16 && edad<=18){
									cout<<"Puede ir al paseo";
								}else{
									cout<<"No puede ir al paseo";
								}		
					}else{
						cout<<"Edad ingresada no valida";
					}
				}else if(vacun==2){
						cout<<"No puede ir al paseo";
					}
				}else{
						cout<<"La opcion ingresa no es valida";
					}
				}else if(dineroah<2000000){
					cout<<"No puede ir al paseo";
				}		
			}else{
				cout<<"Dinero ingresado no valido";
			}	
		}else if(promedio<=38){
		cout<<"No puede ir al paseo";
		}
	}else{
	cout<<"El promedio ingresado no es valido";	
	}
	
	return 0;
}
