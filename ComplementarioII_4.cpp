#include<iostream>
#include<conio.h>

/* Determinar si más de la mitad de estudiantes de un curso perdieron la materia, para ello
tenga en cuenta lo siguiente: para cada estudiante se sacan 3 notas la primera vale el 35%
la segunda el 35% y la tercera el 30%, para un total del 100%, el estudiante aprueba la
materia si la nota es superior a 3,0
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
int nt1,nt2,nt3,def,apro=0,opcion,rep=0,c=0,l1,l2;

do{
c++;
cout<<"Digite su primera nota: "<<endl;
cin>>nt1;
if(nt1>=0 && nt1<=50){
cout<<"Digite su segunda nota: "<<endl;
cin>>nt2;
	if(nt2>=0 && nt2<=50){
	cout<<"Digite su tercera nota: "<<endl;
	cin>>nt3;
		if(nt3>=0 && nt3<=50){
		def=(nt1*0.35)+(nt2*0.35)+(nt3*0.3);
			if(def>=30 && def<=50){
			apro++;
				}else{
				rep++;	
				}
}else{
cout<<"Nota no valida: "<<endl;	
}
}else{
cout<<"Nota no valida: "<<endl;	
}
}else{
cout<<"Nota no valida: "<<endl;	
}
cout<<"Digite 1 si ha ingresado un estudiante. De lo contrario 0"<<endl;
cin>>opcion;
}while(opcion==1);
l1=c-apro;
l2=c-rep;
if(l1<l2){
cout<<"Más te la mitad de los estudiantes pasaron la materia: "<<apro<<" de "<<c<<" estudiantes";	
}else{
cout<<"Más de la mitad de los estudiantes perdieron la materia: "<<rep<<" de "<<c<<" estudiantes";	
}
}
