#include<iostream>
#include<conio.h>

/* 
 Enunciado: John tiene ahorrado la mitad de dinero que tiene Luis, mar�a tiene ahorrado tres veces lo que tiene Jos� y Sandra tiene ahorrado z 
 dinero que le dio su mama, m�s la mitad de dinero que tiene marcos, determine quien tiene m�s dinero ahorrado y quien tiene menos dinero ahorrado.
*/

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

double AhorroL,DinJ,AhorroMM,AhorroMRC,AhorroJ,DinM,DinS;
    
cout<<"Digite el dinero que tiene Luis"<<endl;
cin>>AhorroL;
if(AhorroL>=0){
DinJ = AhorroL/2;
cout<<"Digite el dinero que tiene Jos�"<<endl;
cin>>AhorroJ;
if(AhorroJ>=0){
DinM = AhorroJ*3;
cout<<"Digite el dinero de la mam� de Sandra"<<endl;
cin>>AhorroMM;
cout<<"Digite el dinero de Marcos"<<endl;
cin>>AhorroMRC;
if(AhorroMM>=0 && AhorroMRC>=0){
DinS = AhorroMM + (AhorroMRC/2);
if(DinJ>DinM && DinJ>DinS && DinS>DinM){
cout<<"John es el que tiene m�s dinero ahorrado: "<<DinJ<<" y Mar�a es la que tiene menos dinero ahorrado: "<<DinM<<""<<endl;

}else if(DinJ>DinM && DinJ>DinS && DinS<DinM){
cout<<"John es el que tiene m�s dinero ahorrado: "<<DinJ<<" y Sandra es la que tiene menos dinero ahorrado: "<<DinS<<""<<endl;
}
if(DinM>DinJ && DinM>DinS && DinS>DinJ){
cout<<"Mar�a es la que tiene m�s dinero ahorrado: "<<DinM<<" y John es el que tiene menos dinero ahorrado: "<<DinJ<<""<<endl;

}else if(DinM>DinJ && DinM>DinS && DinS<DinJ){
cout<<"Mar�a es la que tiene m�s dinero ahorrado: "<<DinM<<" y Sandra es la que tiene menos dinero ahorrado: "<<DinS<<""<<endl;
}
if(DinS>DinJ && DinS>DinM && DinM<DinJ){
cout<<"Sandra es la que tiene m�s dinero ahorrado: "<<DinS<<" y John es el que tiene menos dinero ahorrado: "<<DinJ<<""<<endl;

}else if(DinS>DinJ && DinS>DinM && DinM<DinJ){
cout<<"Sandra es la que tiene m�s dinero ahorrado:"<<DinS<<"y Mar�a es la que tiene menos dinero ahorrado"<<DinM<<""<<endl;
}
}
if(AhorroMM<0 || AhorroMRC<0){
cout<<"Los valores digitados no puede ser negativos ";
}

}
if(AhorroJ<0){
cout<<"El valor digitado no puede ser negativo";
}

}
if(AhorroL<0){
cout<<"El valor digitado no puede ser negativo";
}
return 0;
}
