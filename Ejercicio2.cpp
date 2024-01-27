#include<iostream>
#include<conio.h>
/*> María es costurera, doña Sandra le pide hacer un vestido con x área de tela, María tiene un rollo de tela guardado y quiere saber si con la tela que tiene guardada le alcanza para hacerle el vestido a Sandra, de ser así determinar si le queda tela o no le queda, por ello debe determinar cuanta tela le sobra o cuanta le hace falta para hacer el vestido de Sandra.
*/
using namespace std;
int main(){
	setlocale(LC_ALL, "spanish");
	float av, tv, tm, tt, tmm, bv;
	 cout<<"ingrese la altura del area del vestido de Doña Sandra en centimetros: " <<endl;
	 cin>> av;
	   if (av < 0 || av > 10000 ){
	   	 cout<<"error de datos ingresados"<<endl;
	   } else 
	   cout<<"ingrese la base del area del vestido de Doña Sandra en centimetros: " <<endl;
	 cin>> bv;
	   if (bv < 0 || bv > 10000 ){
	   	 cout<<"error de datos ingresados"<<endl;
	   } else 
	   
	    tv= (av * bv);
	    	   cout<<"el area del vestido es de: "<<tv<<" cm"<<endl;
	    	   
	   	cout<<"ingrese la tela que tiene Maria en centimetros: " <<endl;
	 cin>> tm;
	   	if (tm < 0 || tm > 10000 ){
	   	 cout<<"error de datos ingresados"<<endl;
	   } else
	     
		 
	   
	 

	   
	   
	   tt=(tv - tm);
	   tmm= (tm - tv);
	     if (tt==0){
	     	cout<<" la tela que tiene maría es suficiente para hacer el vestido de Doña Sandra"<<endl;
		 }else
		   if (tt>0){
		   	cout<<"la tela que le falta a maria para hacer el vestido en centimetros es: "<< tt ;
		   }else
		   if (tmm>0){
		   	cout<<"la tela que le sobra a maria al hacer el vestido en centimetros es: "<< tmm ;
		   }
		getch();
	return 0;
	}
