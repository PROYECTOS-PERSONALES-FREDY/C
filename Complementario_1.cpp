#include<iostream>
#include<conio.h>

using namespace std;
int main(){
setlocale(LC_ALL, "spanish");

int n,n1,n2,n3,n4,n5,o1,o2,o3,o4,o5,o6;
    /*
    Realice un programa de determine si en un número de 6 dígitos encontramos
    números pares y mostrar cada uno de estos números.
    */
    cout<<"Digite un número de 6 digitos"<<endl;
    cin>>n;
    
    if(n>=100000){
        o1=n%10;
        n1=n/10;
        o2=n1%10;
        n2=n1/10;
        o3=n2%10;
        n3=n2/10;
        o4=n3%10;
        n4=n3/10;
        o5=n4%10;
        n5=n4/10;
        o6=n5%10;
        if(o6%2==0){
        cout<<"Los digitos son:"<<endl;
        cout<<o6<<""<<endl;
        }
        if(o5%2==0){
                            cout<<o5<<""<<endl;
                            }
        if(o4%2==0){
                        cout<<o4<<""<<endl;
                        }
        if(o3%2==0){
                    cout<<o3<<""<<endl;
                    
                    }
        if(o2%2==0){
                cout<<o2<<""<<endl;
                }
        if(o1%2==0){
            
            cout<<o1<<""<<endl;
            
            }
    }else{
       cout<<"El número digitado debe tener 6 digitos y no puede ser negativo"<<endl; 
    }
    }
