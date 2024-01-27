#include<iostream>
#include<conio.h>

/*
 Enuncioado: Una entidad financiera est� realizando un estudio de cr�dito para una persona, para que el
 cr�dito sea aprobado, la persona debe cumplir con los siguientes requisitos: La cuota mensual del
 valor del pr�stamo, no puede superar el 30% del dinero que recibe de salario neto, teniendo en
 cuenta que el dinero que gana no es el mismo que recibe ya que tendr� descuentos obligatorios
 por ley, del 5% del salario para pensi�n y del 8% para salud y el 1% de solidaridad en caso de
 ganar m�s de 4 salarios m�nimos legales vigentes. El n�mero de cuotas m�ximas para pagar el
 pr�stamo es de 72 y el m�nimo de 24, recuerde que, para obtener la cuota, se debe tener en
 cuenta el inter�s sobre el valor del pr�stamo que no puede exceder el 2% mensual, sus gatos en
 cr�ditos y personales no pueden ser superiores al 50% de su salario neto. Determine si se le puede
 realizar el pr�stamo o no a la persona, y en caso de que si se le haga el pr�stamo de cuanto seria el
 valor de la cuota mensual a pagar teniendo en cuenta intereses, por cuantos meses tendr�a la
 deuda y cuanto termina pagando por concepto de intereses. Nota: no olvide que debe realizar el
 an�lisis y el algoritmo que resuelve correctamente el problema..
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

double SMLV=816116,Salario,Prestamo,Cuotas,P1,S1,S2,S3,CreditoP,Intereses;

cout<<"�De cu�nto es su salario mensual?"<<endl;
cin>>Salario;
cout<<"�De cu�nto dinero es el prestamo?"<<endl;
cin>>Prestamo;
if(Salario>=100000 && Salario<200000000){
if(Prestamo>=100000 && Prestamo<200000000){
cout<<"�A cu�ntas cuotas desea el prestamo (Minimo 24/Maximo 72)?"<<endl;
cin>>Cuotas;
if(Cuotas>=24 && Cuotas<=72){
P1=Prestamo/Cuotas;
S1=(Salario*0.05)+(Salario*0.08);
SMLV=SMLV+SMLV+SMLV+SMLV;
if(Salario>SMLV){
S2=S1+(Salario*0.01);
}else{
	S2=Salario*0.3;
}
if(P1<S2){
	cout<<"�De cu�nto dinero son sus gastos crediticios y personales?"<<endl;
	cin>>CreditoP;
	if(Salario>CreditoP){
		Intereses=P1*0.02;
		S3=P1+(P1*0.02);
		cout<<"Su prestamo es aceptado, debe pagarlo en "<<Cuotas<<" cuotas y con intereses del 2% ("<<Intereses<<"). Con un total a pagar por mes de:"<<S3;
	}else{
	cout<<"Prestamo denegado.";
}
}else{
	cout<<"Prestamo denegado. Ya que la cuota mensual del prestamo supera el 30% de su salario neto.";
}
}else{
	cout<<"Cuotas ingresadas no validas. Recuerde Minimo 24/Maximo 72";
}
}else if(Prestamo<100000 && Prestamo>=200000000){
	cout<<"Los datos ingresados no son validos";
}
}else{
	cout<<"Los datos ingresados no son validos";
}
}

