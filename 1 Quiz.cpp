#include<iostream>
#include<conio.h>
/*>1)	Mar�a realiza un viaje en su veh�culo, va de Santa Marta a Bogot�, gastando x galones de gasolina, luego va de Bogot� a Pereira gastando otros x galones de gasolina. Nos pide determinar cu�nto dinero debi� invertir en gasolina para realizar este viaje y si fue necesario tanquear nuevamente para hacer el viaje o la gasolina que ten�a o que tanquea inicialmente le alcanzaba, tambi�n desea saber si despu�s de realizar los viajes en el tanque le quedo gasolina cuanto le quedo

*/
using namespace std;
int main(){
	setlocale(LC_ALL, "spanish");
	float   gh, ghv, vg, mgl, msb, mbp, gsb, vgsb, gbp, vgbp, vt, tg, gtv, rgv, gsm;
	cout<<"Ingrese la cantidad de galones que ya tiene el veh�culo: " <<endl;
	 cin>> gh;
	   if (gh < 0 || gh > 40 ){
	   	 cout<<"error de datos ingresados"<<endl;
	   } else 
	   
   
   
   
   cout<<"Ingrese los galones que va a hechar al carro para realizar el viaje: "<<endl;
	 cin>> ghv;
	   	if (ghv < 0 || ghv > 40 ){
	   	 cout<<"error de datos ingresados"<<endl;
	   } else



cout<<"Ingrese valor de gasolina por galon: "<<endl;
	 cin>> vg;
	   	if (vg < 1000 || vg > 100000 ){
	   	 cout<<"error de datos ingresados"<<endl;
	   } else
	
		   	cout<<"Ingrese el valor de millas que gasta por galon: "<<endl;
	 cin>> mgl;
	   	if (mgl <= 0 || mgl > 200  ){
	   	 cout<<"error de datos ingresados"<<endl;
	   } else

cout<<"Ingrese las millas que gasta de santa marta a Bogot�: "<<endl;
	 cin>> msb;
	   	if ( msb <= 0 || msb > 800  ){
	   	 cout<<"error de datos ingresados"<<endl;
	   } else 
	   
	   cout<<"Ingrese las millas que gasta de Bogot� a pereira: "<<endl;
	 cin>> mbp;
	   	if ( mbp <= 0 || mbp > 800  ){
	   	 cout<<"error de datos ingresados"<<endl;
	   } else 
	   
	   
	   
	    gsb= (msb/mgl);
        vgsb=(gsb* vg);

        gbp=(mbp/mgl);
        vgbp=(gbp* vg);

        vt=(vgbp + vgsb);
        tg =(gsb + gbp);

        gtv=(gh + ghv);

       

        gsm=(ghv-tg);
        
        cout<<" para que mar�a pueda hacer un viaje de santa marta a Bogot� necesita: "<<gsb<<" galones de gasolina que equivalen a $" <<vgsb<< " y para que mar�a pueda hacer un viaje Bogot� a Pereira necesita: " <<gbp<< " galones de gasolina que equivalen a $ " <<vgbp<< " si maria hace estos dos viajes entonces necesitara: " <<tg<< " galones de gasolina que equivalen a un valor total de $"<<vt<<endl;

	   if ( gh > tg){
    cout<< " mar�a no tuvo que parar a tanquear m�s gasolina"<<endl;
} else

        if ( gh < tg){
    cout<<" mar�a si tuvo que parar a tanquear m�s gasolina"<<endl;
} else

        if ( tg == gtv){
    cout<<" a Maria no le quedo nada de gasolina despu�s de realizar los dos viajes"<<endl ;
} else

    if ( tg < gtv){
     cout<<" a Maria le quedo "<<gsm<< " galones de gasolina despu�s de realizar los dos viajes"<<endl ;
} else

	   
	   	getch();
	return 0;
}
