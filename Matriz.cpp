#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 int matriz[3][3];
 for(int x=0;x<3;x++){
  for(int y=0;y<3;y++){
   cout<<"Digita un numero ["<<x<<"]["<<y<<"]: ";
   cin>>matriz[x][y]; 
  }
 }
 
  for(int x=0;x<3;x++){
 	for(int y=0;y<3;y++){
		cout<<matriz[x][y];
		}
	cout<<"\n";
	}
 cout<<"\nLa diagonal de los numeros ingresados es: "<<endl;
 cout<<matriz[0][0]<<endl;
 cout<<"  "<<matriz[1][1]<<endl;
 cout<<"    "<<matriz[2][2]<<endl;
 
 getch();
 return 0;
}
 

