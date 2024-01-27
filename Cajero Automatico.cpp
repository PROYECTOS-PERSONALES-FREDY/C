#include "stdio.h"
main() {
	printf ("Programa para clasificacion de billetes y monedas"\n);
	printf ("digite la cantidad a retirar"\n);
	scaff("%d",&n);
	bcien = int(n/100000);
	n = n%100000;
	b = b+bcien;
	
	
	
	
	
	
	cout << "Billetes de 100000  " << bcien << endl;
	bcinc = int(n/50000);
	n = n%50000;
	b = b+bcinc;
	cout << "Billetes de 50000  " << bcinc << endl;
	bvein = int(n/20000);
	n = n%20000;
	b = b+bvein;
	cout << "Billetes de 20000  " << bvein << endl;
	bdiez = int(n/10000);
	n = n%10000;
	b = b+bdiez;
	cout << "Billetes de 10000  " << bdiez << endl;
	bcin = int(n/5000);
	n = n%5000;
	b = b+bcin;
	cout << "Billetes de 5000  " << bcin << endl;
	bdos = int(n/2000);
	n = n%2000;
	b = b+bdos;
	cout << "Billetes de 2000  " << bdos << endl;
	bmil = int(n/1000);
	n = n%1000;
	m = b+bmil;
	cout << "Billetes de 1000  " << bmil << endl;
	mqui = int(n/500);
	n = n%500;
	m = m+mqui;
	cout << "Monedas de 500  " << mqui << endl;
	mdos = int(n/200);
	n = n%200;
	m = m+mdos;
	cout << "Monedas de 200  " << mdos << endl;
	mcie = int(n/100);
	n = n%100;
	m = m+mcie;
	cout << "Monedas de 100  " << mcie << endl;
	mcin = int(n/50);
	n = n%50;
	m = m+mcie;
	cout << "Monedas de 50  " << mcie << endl;
	return 0;
}

