/*Pide un programa que detecte triangulos rectangulos a partir de sus lados
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "spanish");
    double CatetoA, CatetoB, CatetoC, AnguloA, AnguloB, AnguloC, Tag;
    cout<<"Ingrese el cateto más largo del triángulo"<<endl;
    cin>>CatetoA;
     if(CatetoA<=0){
	 cout<<"Error caracter invalido";
	 
	}else{
		cout<<"Ingrese el cateto más corto del triángulo"<<endl;
         cin>>CatetoB;
             }if(CatetoB<=0){
     	         cout<<"Error caracter invalido";
	}else if(CatetoB>=CatetoA){
		 cout<<"El triangulo no es un triángulo rectángulo"<<endl;
	}else if(CatetoA>CatetoB){
		
         cout<<"Ingrese el ultimo cateto del triángulo"<<endl;
         cin>>CatetoC;
              }if(CatetoC<=0){
              	cout<<"Error caracter invalido";
             }else if(CatetoC<=CatetoB || CatetoC>=CatetoA){
         	    cout<<"El triángulo no es un triangulo rectángulo"<<endl;
             }else if(CatetoC>CatetoB && CatetoC<CatetoA){
         	    cout<<"Ingrese el ángulo A del triángulo"<<endl;
         	    cin>>AnguloA;
         	    cout<<"Ingrese el ángulo B del triángulo"<<endl;
         	    cin>>AnguloB;
         	    cout<<"Ingrese el ángulo C del triángulo"<<endl;
         	    cin>>AnguloC;
         	         if(AnguloC<90 || AnguloC>90){
         	        cout<<"El triangulo no es rectangulo"<<endl;
				}else if (AnguloC==90){
                 Tag=AnguloA+AnguloB+AnguloC;
				    }if(Tag<180 || Tag> 180){
                     cout<<"El triángulo no es rectángulo debido a que al sumar sus ángulos no da 180°"<<endl;
         	         }else if(Tag==180){
         	         cout<<"¡EUREKA!";
         	     }
         	     
            }
			
	getch();//detener pantalla
	return 0;
}
