#include<iostream>
#include<conio.h>

/*
 Enunciado: Un profesor define los siguientes porcentajes para las notas de su materia: parcial 40%, tareas y qüices 25%, proyecto final 35%.  
 El programa debe pedir las 3 notas al usuario entre 0 y 5, calcular la definitiva del estudiante y felicitar únicamente a aquellos 
 que obtengan una definitiva superior a 4.5.
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

double Parcial,TaQu,ProyectoF;
cout<<"Digite su nota del parcial"<<endl;
cin>>Parcial;
if(Parcial>=0 && Parcial<=50){
Parcial = Parcial*0.4;
cout<<"Digite su nota de talleres y quices"<<endl;
cin>>TaQu;
if(TaQu>=0 && Parcial<=50){
TaQu=TaQu*0.25;
cout<<"Digite su nota del proyecto final"<<endl;
cin>>ProyectoF;
if(ProyectoF>=0 && ProyectoF<=50){
ProyectoF = ProyectoF*0.35;
double Def = Parcial+TaQu+ProyectoF; 
if(Def>45 && Def<=50){
cout<<"Felicidades usted tiene una definitiva excelente:  "<<Def;
}
if(Def>=0 && Def<=45){
cout<<"Su definitiva es: "<<Def;
}
}
if(ProyectoF<0 && ProyectoF>50){
cout<<"Nota ingresada no valida";
}
}
if(TaQu<0 && Parcial>50){
cout<<"Nota ingresada no valida";
}
} 
if(Parcial<0 && Parcial>50){
cout<<"Nota ingresada no valida";
}
}
