/*Pide un programa que detecte triangulos rectangulos a partir de sus lados
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "spanish");
    double CatetoA, CatetoB, CatetoC, AnguloA, AnguloB, AnguloC, Tag;
    cout<<"Ingrese el cateto m�s largo del tri�ngulo"<<endl;
    cin>>CatetoA;
     if(CatetoA<=0){
	 cout<<"Error caracter invalido";
	 
	}else{
		cout<<"Ingrese el cateto m�s corto del tri�ngulo"<<endl;
         cin>>CatetoB;
             }if(CatetoB<=0){
     	         cout<<"Error caracter invalido";
	}else if(CatetoB>=CatetoA){
		 cout<<"El triangulo no es un tri�ngulo rect�ngulo"<<endl;
	}else if(CatetoA>CatetoB){
		
         cout<<"Ingrese el ultimo cateto del tri�ngulo"<<endl;
         cin>>CatetoC;
              }if(CatetoC<=0){
              	cout<<"Error caracter invalido";
             }else if(CatetoC<=CatetoB || CatetoC>=CatetoA){
         	    cout<<"El tri�ngulo no es un triangulo rect�ngulo"<<endl;
             }else if(CatetoC>CatetoB && CatetoC<CatetoA){
         	    cout<<"Ingrese el �ngulo A del tri�ngulo"<<endl;
         	    cin>>AnguloA;
         	    cout<<"Ingrese el �ngulo B del tri�ngulo"<<endl;
         	    cin>>AnguloB;
         	    cout<<"Ingrese el �ngulo C del tri�ngulo"<<endl;
         	    cin>>AnguloC;
         	         if(AnguloC<90 || AnguloC>90){
         	        cout<<"El triangulo no es rectangulo"<<endl;
				}else if (AnguloC==90){
                 Tag=AnguloA+AnguloB+AnguloC;
				    }if(Tag<180 || Tag> 180){
                     cout<<"El tri�ngulo no es rect�ngulo debido a que al sumar sus �ngulos no da 180�"<<endl;
         	         }else if(Tag==180){
         	         cout<<"�EUREKA!";
         	     }
         	     
            }
			
	getch();//detener pantalla
	return 0;
}
