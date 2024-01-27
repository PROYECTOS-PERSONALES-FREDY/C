#include<iostream>
#include<conio.h>

/* Una empresa nos pide determinar cuánto dinero gastos por concepto de pago de sus
empleados teniendo en cuenta lo siguiente:
A la empresa le corresponde pagar por salud y pensión de cada empleado el 5% del salario
que recibe este, si el empleado es mensajero tiene un auxilio de transporte del 3% sobre el
sueldo base, si el empleado es madres cabeza de familia tiene un bono de $100.000.
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
int sueldo,syp,opcion,total=0,total1=0,total2=0,total3=0,totalf;
cout<<"¿De cuánto es su sueldo?"<<endl; 
cin>>sueldo;
do{

if(sueldo>=100000 && sueldo<=100000000){
syp=sueldo*0.05;
cout<<"Elija el código según su la opción"<<endl<<endl;
cout<<"* Mensajero (Código 1)"<<endl;
cout<<"* Madre cabeza de familia (Código 2)"<<endl;
cout<<"* Mensaje y madre cabeza de familia (Código 3)"<<endl;
cout<<"* Ninguna (Código 3)"<<endl;
cin>>opcion;
cout<<""<<endl;
switch(opcion){

		case 1: total=total+(sueldo+syp+(sueldo*0.03));
				
		break;

		case 2: total1=total1+(sueldo+syp+100000);
				
		break;
		
		case 3: total2=total2+(sueldo+syp+(sueldo*0.03)+100000);
				
		break;

		case 4:	total3=total3+(sueldo+syp);
					;
		break;
		
		default: cout<<"Opción no válida "<<endl<<endl;						

}
}else{
cout<<"Sueldo digitado no válido"<<endl;	
}
cout<<"¿De cuánto es su sueldo? Si desea terminar el proceso digite 0."<<endl; 
cin>>sueldo;
}while(sueldo>0);
totalf=total1+total+total2+total3;
cout<<"La empresa gasta un total de: "<<totalf<<endl;
}

