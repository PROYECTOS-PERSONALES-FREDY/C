/*1. Realice un programa que determine por cada piso de un centro
comercial de 3 pisos, el total de dinero recolectado por ventas de
cada uno de los locales del piso.

2. Realice un programa que genere la siguiente serie. El tope de la serie
lo debe pone r el usuario.
0,1,1,2,3,5,8,13,21….n

3. Realice un programa que resuelva la siguiente serie.
{[(2!)/(3ˆn)]ˆ(n+1)} - {[(3!)/(5ˆn)]ˆ(n+1)} +
{[(4!)/(7ˆn)]ˆ(n+1)}…nveces
Donde ! significa el factorial de un número.
ˆ significa elevado cada una de las expresiones a resolver esta
separada por { }.

4.Determine la cantidad de personas ciegas que ingresaron a un hospital.

5. Determine la cantidad de personas que pagaron con tarjeta de crédito en
un establecimiento, para ello recuerde que el monto de compra debe ser
mínimo de $50000.*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int mostrar_menu();
void ejecutar_menu(int);

void eje1();
void eje2();
void eje3();
void eje4();
void eje5();

int main(){
setlocale(LC_ALL,"spanish");
int menu;
do{
menu=mostrar_menu();
ejecutar_menu(menu);
}
while(menu>=1 && menu<=5);
getch();
    return 0;
}

int mostrar_menu(){
int res;
cout<<""<<endl;
cout<<"Menu de Opciones"<<endl;
cout<<"-Ejercicio 1 (Digite 1)"<<endl;
cout<<"-Ejercicio 2 (Digite 2)"<<endl;
cout<<"-Ejercicio 3 (Digite 3)"<<endl;
cout<<"-Ejercicio 4 (Digite 4)"<<endl;
cout<<"-Ejercicio 5 (Digite 5)"<<endl;
cout<<""<<endl;

cout<<"Seleccione la opcion"<<endl;
cin>>res;
return res;	
}

void ejecutar_menu(int menu){
switch(menu){
case 1: eje1();
break;
case 2: eje2();
break;
case 3: eje3();
break;
case 4: eje4();
break;
case 5: eje5();
break;
default: cout<<"Termino"<<endl;
}
}

void eje1(){
	int i,pisos,dn1=0,dn2=0,dn3=0,lp,dl;
for(i=1;i<=3;i++){
cout<<""<<endl;
cout<<"Ingrese la cantidad de locales que hay en el piso "<<i<<endl;
cin>>lp;
for(pisos=1;pisos<=lp;pisos++){
cout<<"Ingrese el dinero recolectado en el local "<<pisos<<endl;
cin>>dl;
while(dl<1000){
cout<<"Cantidad de dinero invalida minimo tiene que ser una cantidad de $1000, intente nuevamente"<<endl;
cin>>dl;
}
if(i==1){
dn1=dn1+dl;
}
if(i==2){
dn2=dn2+dl;
}
if(i==3){
dn3=dn3+dl;
}
}
}
cout<<""<<endl;
cout<<"La cantidad de dinero recolectado en el piso 1 del centro comercial fue de: $"<<dn1<<endl;
cout<<"La cantidad de dinero recolectado en el piso 2 del centro comercial fue de: $"<<dn2<<endl;
cout<<"La cantidad de dinero recolectado en el piso 3 del centro comercial fue de: $"<<dn3<<endl;
cout<<""<<endl;
cout<<"Seleccione un ejercicio, si desea terminar el programa digite otro numero que no este en las opciones."<<endl;
cout<<""<<endl;	

}

void eje2(){
int r,i,p=1;
cout<<"Inserte el tope de la serie que desea mostrar"<<endl;
cin>>r;
while(r<0){
cout<<"El tope ingresado es invalido, ingrese nuevamente el tope."<<endl;
cin>>r;
}
cout<<""<<endl;
cout<<"La serie es: "<<endl;
for(i=0;i<=r;i=i+p){
cout<<i<<endl;
if(p+i<=r){
p=p+i;
cout<<p<<endl;

}
}
cout<<""<<endl;
cout<<"Seleccione un ejercicio, si desea terminar el programa digite otro numero que no este en las opciones."<<endl;
cout<<""<<endl;
}

void eje3(){
int f,i,j,n=1,d=1,rn=1,rde,rdi,rpo,resu=0;
cout<<"Ingrese cuantas veces se quiere repitir la serie"<<"\n";
cin>>f;
while(f<1){
cout<<"error en la cantidad de veces que se repite la serie, ingreselo nuevamente"<<"\n";
cin>>f;
}
for(i=1;i<=f;i++){
n=n+1;
d=d+2;
for(j=1;j<=n;j++){
rn=rn*j;	
}
rde=pow(rde,f);
rdi=rn/rde;
rpo=pow(rdi,f+1);
if(n%2==0){	
resu=resu+rpo;
}
if(n%2!=0){
resu=resu-rpo;
}	
}
cout<<"El resultado final de la serie es:"<<resu<<endl;
cout<<""<<endl;
cout<<"Seleccione un ejercicio, si desea terminar el programa digite otro numero que no este las opciones"<<endl;
	cout<<""<<endl;
}
void eje4(){
	
int edad,o=0,opcion=0,c=0,c1=0,c2=0;
char nombre[30];

do{
cout<<"¿Cual es el nombre del paciente?"<<endl;
cin>>nombre;

cout<<"¿El paciente es ciego?"<<endl;
cout<<""<<endl;
cout<<"* Si Código: 1)"<<endl;
cout<<"* No (Código: 2)"<<endl;
cin>>opcion;
cout<<""<<endl;
switch(opcion){
	case 1: cout<<"El paciente "<<nombre<<"  tiene discapacidad visual "<<endl; 
			c++;
	break;
	case 2: cout<<"El paciente "<<nombre<<" No tiene discapacidad visual"<<endl;
			c1++;
	break;
	default: cout<<"Usted no ha elegido ninguna opcion o la opcion escogida es incorrecta."<<endl;
}
cout<<""<<endl;	
cout<<"Para continuar digite el número 1. De lo contrario digite cualquiera otro número."<<endl;
cin>>o;

}
while(o==1);

c2=c1+c;
	cout<<"Un total de pacientes que ingresaron al hospital con discapacidad visual es: "<<c<<endl;
	cout<<"El total de pacientes que ingresaron al hospital es: "<<c2<<endl;
    cout<<""<<endl;
    cout<<"Seleccione un ejercicio, si desea terminar el programa digite otro numero que no este en las opciones."<<endl;
    cout<<""<<endl;	


}

void eje5(){
int pago=0,c=0,c1=0, total, q, credito, c3=0;

cout<<"Digite (1) cuando halla un cliente y (0) cuando no hallan mas"<<endl;
cin>>q;
do{
cout<<"¿Cuánto tiene qué pagar?"<<endl;
cin>>pago;
cout<<""<<endl;
if(pago>=50 && pago<100000000){
	c3++;
	cout<<"¿Desea pagar sus compras con tarjeta de credito?"<<endl;
	cout<<""<<endl;
    cout<<"* Si (Código: 1)"<<endl;
     cout<<"* No (Código: 2)"<<endl;
    cin>>credito;
    cout<<""<<endl;
	switch(credito){
		case 1: 
		if(pago>=50000 && pago<10000000){
			c++;
		
			cout<<"Usted a pagado con tarjeta de credito "<<endl;
				cout<<""<<endl;
		}else{ cout<<"usted no puede pagar con tarjeta de credito ya que sus comprar no superan los $50.000"<<endl;
		}
	    break;
    	case 2:    
	    break;
	    default: cout<<"Usted no ha elegido ninguna opcion o la opcion escogida es incorrecta."<<endl;
}

	
}else{
cout<<"Los datos no son validos"<<endl;	
}
cout<<"Digite (1) cuando halla un cliente y (0) cuando no hallan mas"<<endl;
cin>>q;




} while(q==1);
cout<<"El total de clientes que pagaron fue de: "<<c3<<endl;
cout<<"El total de clientes que pagaron con tarjeta de credito es de: "<<c<<endl;
	cout<<""<<endl;
	cout<<"Seleccione un ejercicio, si desea terminar el programa digite otro numero que no este en las opciones"<<endl;
		cout<<""<<endl;
}

