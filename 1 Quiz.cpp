#include<iostream>
#include<conio.h>
/*>1)	María realiza un viaje en su vehículo, va de Santa Marta a Bogotá, gastando x galones de gasolina, luego va de Bogotá a Pereira gastando otros x galones de gasolina. Nos pide determinar cuánto dinero debió invertir en gasolina para realizar este viaje y si fue necesario tanquear nuevamente para hacer el viaje o la gasolina que tenía o que tanquea inicialmente le alcanzaba, también desea saber si después de realizar los viajes en el tanque le quedo gasolina cuanto le quedo

*/
using namespace std;
int main(){
	setlocale(LC_ALL, "spanish");
	float   gh, ghv, vg, mgl, msb, mbp, gsb, vgsb, gbp, vgbp, vt, tg, gtv, rgv, gsm;
	cout<<"Ingrese la cantidad de galones que ya tiene el vehículo: " <<endl;
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

cout<<"Ingrese las millas que gasta de santa marta a Bogotá: "<<endl;
	 cin>> msb;
	   	if ( msb <= 0 || msb > 800  ){
	   	 cout<<"error de datos ingresados"<<endl;
	   } else 
	   
	   cout<<"Ingrese las millas que gasta de Bogotá a pereira: "<<endl;
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
        
        cout<<" para que maría pueda hacer un viaje de santa marta a Bogotá necesita: "<<gsb<<" galones de gasolina que equivalen a $" <<vgsb<< " y para que maría pueda hacer un viaje Bogotá a Pereira necesita: " <<gbp<< " galones de gasolina que equivalen a $ " <<vgbp<< " si maria hace estos dos viajes entonces necesitara: " <<tg<< " galones de gasolina que equivalen a un valor total de $"<<vt<<endl;

	   if ( gh > tg){
    cout<< " maría no tuvo que parar a tanquear más gasolina"<<endl;
} else

        if ( gh < tg){
    cout<<" maría si tuvo que parar a tanquear más gasolina"<<endl;
} else

        if ( tg == gtv){
    cout<<" a Maria no le quedo nada de gasolina después de realizar los dos viajes"<<endl ;
} else

    if ( tg < gtv){
     cout<<" a Maria le quedo "<<gsm<< " galones de gasolina después de realizar los dos viajes"<<endl ;
} else

	   
	   	getch();
	return 0;
}
