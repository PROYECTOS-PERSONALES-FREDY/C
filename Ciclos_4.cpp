#include<iostream>
#include<conio.h>

/* Mostrar el nombre de los n empleados de una empresa que ganan entre 3 y 4 salarios
mínimos.
 */

using namespace std;

int main(){
setlocale(LC_ALL, "spanish");
int n,d=0,count1=0,count2=2,o;
cout<<"Para comenzar digite el numero (1) de lo contrario coloque cualquier otro numero"<<endl;
cin>>o;

do{
 cout<<"Ingrese el numerador "<<endl;    
 cin>>n;
        cout<<"Ingrese el denominador"<<endl;        
        cin>>d;
if(n==0 || d==0){
	cout<<"El numerador ni el demoniador pueden ser 0"<<endl;		
}        
       
 if (n<0){
     n=n*(-1);
     count1++;
    }

 if (d<0)
    {
     d=d*(-1);
     count1++;
    }

 while (count2<=n && count2<=d){
       if(n%count2==0&&d%count2==0){
          n=n/count2;
          d=d/count2;
         }
       else               
          count2++;
      }
if(count1%2)   
     n=n*(-1);
    
if(!n){
     cout<<"Por lo tanto la fracción simplicada es: 0"<<endl;
}
if(!d){
	cout<<"Por lo tanto la fracción simplicada es: 0"<<endl;
}
else{
      if(d==1)   
         cout<<"La fraccion simplicada es : "<<n<<""<<endl;
             
   
      else    
         cout<<"La fracción simplicada es : "<<n<<"/"<<d<<""<<endl;
     }
cout<<"Desea continuar? Si desea continuar ponga (1) de lo contrario ponga cualquier otro número"<<endl;
cin>>o;     
}while(o==1);
    system("PAUSE");
}



