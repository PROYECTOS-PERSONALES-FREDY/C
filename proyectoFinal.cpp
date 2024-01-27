#include <iostream>
#include <stdlib.h>
using namespace std;

int banco[20];

void consultar(int array[]){
	int cliente;
	cout<<"\n\n		Ingrese cliente: cliente";
	cin>>cliente;
	if(cliente<20&&cliente>0){
		cout<<"\n		Saldo actual: $"<<array[cliente];
	}else cout<<"\n		Cliente no registra.";
}

void consignar(int array[]){
	int cliente,valor;
	cout<<"\n\n		Ingrese cliente: cliente";
	cin>>cliente;
	if(cliente<20&&cliente>0){
		cout<<"\n		Ingrese valor US: ";
		cin>>valor;
		if(valor>0){
			array[cliente]+=valor;
			cout<<"\n		Nuevo saldo: "<<array[cliente];
		}else	cout<<"\n		Valor invalido";		
	}else	cout<<"\n		Cliente no registra.";
}

void retirar(int array[]){
	int cliente,valor;
	cout<<"\n\n		Ingrese cliente: cliente";
	cin>>cliente;
	if(cliente>0&&cliente<21){
		cout<<"\n		Ingrese valor US: ";
		cin>>valor;
		if(valor>0){		
			if(array[cliente]-valor >= -1000){		
				array[cliente]-=valor;
				cout<<"\n		Nuevo saldo: "<<array[cliente]<<"\n\n";
			}else cout<<"\n		Saldo insuficiente.";
		}else cout<<"\n		Valor invalido\n\n";
	}else cout<<"\n		Cliente no registra. \n\n";
}

void reporte(int array[]){
	cout<<"\n\n		Clientes	Saldos\n\n";
	for(int i=1; i<21; i++)
		cout<<"		Cliente"<<i<<"	$"<<array[i]<<"\n";
}

void balance(int array[]){
	int sobregiros=0;
	int saldos=0;
	int total;
	for(int i=1;i<21;i++){
		if(array[i]<0)
			sobregiros-=array[i];
		else
			saldos+=array[i];			
	}
	total = saldos - sobregiros;
	cout<<"\n\n		Total sobregiros: $"<<sobregiros;
	cout<<"\n\n		Total saldos:     $"<<saldos;
	cout<<"\n\n		Total disponible: $"<<total;	
}

void iniciar(int array[]){
	for(int i=1; i<21; i++){
		array[i] = 100;
	}
}

void estado(int array[]){
	cout<<"\n\n	Clientes en sobregiro\n\n";
	cout<<"		Clientes	Saldos\n\n";
	for(int i=1; i<21; i++)
		if(array[i]<0)
			cout<<"		Cliente"<<i<<"	$"<<array[i]<<"\n";
	
	cout<<"\n\n	Clientes saldo a favor\n\n";
	cout<<"		Clientes	Saldos\n\n";
	for(int i=1; i<21; i++)
		if(array[i]>0)
			cout<<"		Cliente"<<i<<"	$"<<array[i]<<"\n";
}

void init(int array[]){
	for(int i=1;i<21;i++)
		array[i]=100;
}

main(){
	init(banco);
	int op,n;
	
	do{
		system("cls");
		cout<<  "\n\n		Menu Principal \n\n"
				"		1. Consultar saldo.\n"
				"		2. Realizar consignacion.\n"
				"		3. Realizar retiro.\n"
				"		4. Reporte general.\n"
				"		5. Balance general.\n"
				"		6. Iniciar operacion.\n"
				"		7. Estado clientes.\n"
				"		8. Salir.\n\n"
				"		   Seleccione una opcion: ";
				
		
		cin>> op;
		if(op>0||op<9){
			switch(op){
				case 1:
					system("cls");
					cout<<"\n\n		Consultar saldo.";
					consultar(banco);
					cout<<"\n\n		Ingrese#1 para continuar";
					cin>>n;
					break;
				case 2:
					system("cls");
					cout<<"\n\n		Realizar consignacion.";
					consignar(banco);
					cout<<"\n\n		Ingrese#1 para continuar";
					cin>>n;
					break;
				case 3:
					system("cls");
					cout<<"\n\n		Realizar retiro.";
					retirar(banco);
					cout<<"\n\n		Ingrese#1 para continuar";
					cin>>n;
					break;
				case 4:
					system("cls");
					cout<<"\n\n		Reporte general.";
					reporte(banco);
					cout<<"\n\n		Ingrese#1 para continuar";
					cin>>n;
					break;
				case 5:
					system("cls");
					cout<<"\n\n		Balance general.";
					balance(banco);
					cout<<"\n\n		Ingrese#1 para continuar";
					cin>>n;
					break;
				case 6:
					system("cls");
					cout<<"\n\n		Iniciar operacion.";
					iniciar(banco);
					cout<<"\n\n		Ingrese#1 para continuar";
					cin>>n;
					break;
				case 7:
					system("cls");
					cout<<"\n\n		Estado clientes.";
					estado(banco);
					cout<<"\n\n		Ingrese#1 para continuar";
					cin>>n;
					break;					
			}
		}else {
			cout<<"\n		Valor invalido\n";
			cout<<"\n		Ingrese#1 para continuar";
			cin>>n;
	}
	}while(op != 8);
}
