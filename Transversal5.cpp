#include "mbed.h"
#include "SPI_TFT_ILI9341.h"
#include "string"
#include "Arial12x12.h"
#include "Arial24x23.h"
#include "Arial28x28.h"
#include "font_big.h"
#include "UTouch.h"
#include "stdio.h"
#include <math.h>
#define PI 3.14159265


bool itp=false,desin=false,ebuzzer=true;
int c=1,a=0,b=0,d=0,totalt[3],v1[50],r=0,l=0,sumat=0,sumac=0,e=0,aux=0,temp=0,auxt=22,base=213,auxcom=0;
float x=0,y=0,dx=0,dy=0,rad=0,h=-90,radp=0,px=0,py=0,k=-90,vel=0,mx=0,my=0,sumaAngulos=0,temptft=0,Angulo=0, Angulo1=0,auxb=169;
char dato[30],caracter;
int caracterEntrada=0,numi=0,p=0,i=0,numllegada=0,trans=0,caracternum=0,servop[30];

int numstep = 0; //Una vuelta son 512 pasos
int step_speed = 1000; //Velocidad del motor

Timer rebote1;

InterruptIn sensor(A4);

PwmOut servo(D15);

AnalogIn temperatura(A5);

RawSerial pc(USBTX,USBRX);

DigitalOut buzzer(D14);
DigitalOut opto(D2);
DigitalOut ledv(A2);
DigitalOut ledr(A3);

// the TFT is connected to SPI pin 5-7
SPI_TFT_ILI9341 TFT(D11,D12,D13,D10,D8,D9,"TFT");// mosi, miso, sclk, cs, reset, dc ......................ojo reset a 3.3 v
UTouch  myTouch(A0, A1, D7, D5, D4); //PinName tclk, PinName tcs, PinName tdin, PinName dout, PinName irq ojo esta para kl25Z funcional


void interrupcion_serial(void)
{
    dato[numllegada]=pc.getc();
    p=1;
    caracternum=0;
    numllegada++;
}
int CharAEntero(char caracterEntrada)
{
    int n;
    if (caracterEntrada=='0') {
        n=0;
    } else if (caracterEntrada=='1') {
        n=1;
    } else if (caracterEntrada=='2') {
        n=2;
    } else if (caracterEntrada=='3') {
        n=3;
    } else if (caracterEntrada=='4') {
        n=4;
    } else if (caracterEntrada=='5') {
        n=5;
    } else if (caracterEntrada=='6') {
        n=6;
    } else if (caracterEntrada=='7') {
        n=7;
    } else if (caracterEntrada=='8') {
        n=8;
    } else if (caracterEntrada=='9') {
        n=9;
    }
    return n;
}

void teclado(void)
{
    TFT.foreground(White);
    TFT.cls();
    TFT.set_font((unsigned char*) Arial24x23);
    //Numeros
    //Primera Columna
    TFT.locate(22,36);
    TFT.printf("1");
    TFT.locate(22,90);
    TFT.printf("4");
    TFT.locate(22,140);
    TFT.printf("7");
    TFT.locate(22,190);
    TFT.printf("H");
    //Segunda Columna
    TFT.locate(75,36);
    TFT.printf("2");
    TFT.locate(75,90);
    TFT.printf("5");
    TFT.locate(75,140);
    TFT.printf("8");
    TFT.locate(75,190);
    TFT.printf("0");
    //Tercera Columna
    TFT.locate(130,36);
    TFT.printf("3");
    TFT.locate(130,90);
    TFT.printf("6");
    TFT.locate(130,140);
    TFT.printf("9");
    TFT.locate(115,190);
    TFT.printf("-->");


    //Columnas
    TFT.line(10,20,10,220,White);
    TFT.line(60,20,60,220,White);
    TFT.line(110,20,110,220,White);
    TFT.line(160,20,160,220,White);

    //Filas
    TFT.line(10,20,160,20,White);
    TFT.line(10,70,160,70,White);
    TFT.line(10,120,160,120,White);
    TFT.line(10,170,160,170,White);
    TFT.line(10,220,160,220,White);

    //Titulo
    TFT.locate(190,90);
    TFT.printf("Tiempo:");
    TFT.locate(200,120);
    TFT.printf("00:00");

}

void interrup()
{
    buzzer=0;
    opto=0;
    //90°
    servo=0.02475+0.00125*20;
    itp=true;
    desin=true;
    rebote1.reset();
}
void conteo(int numero)
{
    pc.printf("%i\r\n",numero);
    itp=false;
    sensor.disable_irq();
    //90°
    servo=0.02475+0.00125*20;
    TFT.foreground(Red);
    TFT.cls();

    TFT.locate(45,90);
    TFT.printf("Tiene       para");
    TFT.locate(130,90);
    TFT.printf("05:00");// si cambio el numero de abajo , cambio tambien aqui

    TFT.locate(30,120);
    TFT.printf("retirarse del lugar");
    for(int i=4; i>=0; i--) { //Si quiero minutos se multiplica el vector por *60
        if(itp==true) {
            break;
            opto=0;
        }

        if(i<=9) {
            TFT.locate(130,90);
            TFT.printf("0%i",i);
        } else if(i>=10) {
            TFT.locate(130,90);
            TFT.printf("%i",i);
        }
        if(i<=1) {
            sensor.enable_irq();

        }
        for(int j=60; j>=0; j--) {
            if(itp==true) {
                break;
            }

            else if(j<=9) {
                TFT.locate(170,90);
                TFT.printf(":0%i",j);
            } else if(j>=10) {
                TFT.locate(170,90);
                TFT.printf(":%i",j);
            }
            wait(0.01);
        }

    }
    servo=0.021;
    sensor.enable_irq();
    TFT.cls();
    TFT.foreground(White);
    if(itp==false) {
        TFT.locate(50,60);
        TFT.printf("Desinfectando...");
    } else {
        servo=0.02475+0.00125*20;
        TFT.locate(50,60);
        TFT.printf("Reiniciando...");

        wait(3);

        servo=0.021;
    }


    for(int i=0; i<=numero; i++) { //Si quiero minutos se multiplica el vector por *60
        if(itp==true) {
            break;
        }

        opto=1;

        if(i==0) {
            buzzer=1;
        }

        if(i<=9) {
            TFT.locate(120,100);
            TFT.printf("0%i",i);
        } else if(i>=10) {
            TFT.locate(120,100);
            TFT.printf("%i",i);
        }
        for(int j=0; j<=60; j++) {
            if(itp==true) {
                break;
            }
            if(numero-1==i&&j==45) {
                buzzer=1;
            }
            if (numero==i) {
                break;
            }
            if (j==15&&i==0) {
                buzzer=0;
            }
            if(j<=9) {
                TFT.locate(160,100);
                TFT.printf(":0%i",j);
            } else if(j>=10&&j<60) {
                TFT.locate(160,100);
                TFT.printf(":%i",j);
            } else if(j==60) {
                TFT.locate(160,100);
                TFT.printf(":00");
            }
            wait(0.01);
        }
    }
    buzzer=0;
    itp=false;
    opto=0;
    teclado();
    aux=0;

}
void limiteTemp(int num)
{
    if(temptft<=num) {
        ledv=1;
        ledr=0;
        ebuzzer=true;
        buzzer=0;
    } else {
        ledv=0;
        ledr=1;
        if(ebuzzer==true){
        buzzer=1;
        wait(0.5);
        buzzer=0;
        ebuzzer=false;
        }else{
        buzzer=0;
            }
    }
    
    TFT.set_font((unsigned char*) Arial12x12);
    TFT.locate(120,40);
    TFT.printf("%i C",num);
    TFT.set_font((unsigned char*) Arial24x23);
}
int main()
{
    servo.period(0.0248); //periodo es de 25m


    sensor.mode(PullDown);
    sensor.rise(&interrup);

    rebote1.start();

    pc.baud(9600);//sincronizar la comunicacion

    pc.attach(&interrupcion_serial);

    TFT.claim(stdout);      // arranca el stdout de la TFT
    TFT.claim(stderr);      // send stderr to the TFT display

    TFT.set_orientation(1);
    TFT.background(Black);
    TFT.foreground(White);
    TFT.cls();               // clear the screen

    // se ponen los dos codigos inferiores para inicializar el touch
    myTouch.InitTouch();
    myTouch.SetPrecision(PREC_EXTREME);

    TFT.set_font((unsigned char*) Arial24x23);



    TFT.locate(70,70);
    printf("BIENVENIDO");
    TFT.locate(70,100);
    TFT.printf("AL PROCESO");
    TFT.locate(15,130);
    TFT.printf("DE DESINFECCION");

    //wait(5);
    TFT.cls();

    while(true) {

        TFT.background(Black);
        TFT.foreground(Red);
        TFT.locate(50,30);
        TFT.printf("DESINFECCION");
        TFT.locate(140,60);
        TFT.printf("UV");


        TFT.foreground(White);

        TFT.locate(40,110);
        TFT.printf("Elija una opcion:");


        TFT.set_font((unsigned char*) Arial12x12);
        TFT.fillrect(10,190,150,230,Red);
        TFT.locate(30,205);
        TFT.background(Red);
        TFT.foreground(White);
        TFT.printf("TEMPERATURA");

        TFT.fillrect(160,190,310,230,Red);
        TFT.locate(180,205);
        TFT.background(Red);
        TFT.foreground(White);
        TFT.printf("DESINFECCION");

        TFT.foreground(White);
        TFT.background(Black);

        while(c==1) {
            if(desin==true) {

                wait(1);

                servo=0.021;
                desin=false;
            }

            // Aqui empieza el codigo para ver las coordenadas del tactil
            if (myTouch.DataAvailable()) {
                if(myTouch.Read()) {

                    x = myTouch.GetX(); // toma x del touch
                    y = myTouch.GetY(); // toma y del touch
                    /*TFT.locate(60,60);
                    TFT.printf("%.0f , %.0f  ", x, y);*/

                    if (y>0&&y<15&&x>72&&x<142) {
                        c++;
                    }
                    if (y>0&&y<15&&x>0&&x<69) {
                        c++;
                    }

                }
            }
            //Aqui termina el codigo para ver las coordenadas del tactil
        }

//Temperatura
        if (y>0&&y<15&&x>72&&x<142) {
            TFT.cls();
            TFT.foreground(White);
            while(c!=1) {
                if(desin==true) {

                    wait(1);

                    servo=0.021;
                    desin=false;
                }
                if (myTouch.DataAvailable()) {
                    TFT.cls();
                    ledv=0;
                    ledr=0;
                    c=1;
                }
                TFT.cls();
                TFT.set_font((unsigned char*) Arial24x23);
                TFT.locate(18,20);
                TFT.printf("C");
                TFT.locate(296,209);
                TFT.printf("t");
                //Eje X
                TFT.line(10,215,290,215,White);
                TFT.line(10,217,290,217,White);
                TFT.line(10,216,290,216,White);
                //Eje Y
                TFT.line(27,224,27,45,White);
                TFT.line(28,224,28,45,White);
                TFT.line(29,224,29,45,White);

                TFT.set_font((unsigned char*) Arial12x12);
                //Limite
                TFT.locate(45,40);
                TFT.printf("Temp.Max:");
                //0°
                TFT.locate(1,212);
                TFT.printf("0");
                //20°
                TFT.locate(1,165);
                TFT.printf("20");
                TFT.line(20,169,290,169,White);
                //40°
                TFT.locate(1,121);
                TFT.printf("40");
                TFT.line(20,125,290,125,White);
                //60°
                TFT.locate(1,77);
                TFT.printf("60");
                TFT.line(20,81,290,81,White);

                for(int i=30; i>29&&i<291; i++) {
                    if(desin==true) {

                        wait(1);

                        servo=0.021;
                        desin=false;

                        wait(1);
                    }
                    TFT.set_font((unsigned char*) Arial28x28);
                    temperatura.read();

                    temptft=(temperatura*330)-15;

                    TFT.locate(190,30);
                    TFT.printf("%0.1f C",temptft);


                    if(sumac==0) {
                        limiteTemp(25);
                    }else{
                        limiteTemp(auxcom);
                        }

                    if(p==1) {

                        if(numllegada==1) {
                            wait(2);
                        }
                        if(numllegada==3) {
                            wait(0.5);
                            auxcom=(CharAEntero(dato[1])*10+CharAEntero(dato[2]));
                            limiteTemp(auxcom);
                            numllegada=0;

                        }
                        if(numllegada==1) {
                            auxcom=(CharAEntero(dato[0]));
                            limiteTemp(auxcom);
                        }
                        p=0;
                        sumac=1;
                    }

                    auxb=base;
                    auxt=i;

                    base=(((temptft*-2.2)+213) +auxb)/2;


                    TFT.line(auxt,auxb,i,base,Cyan);
                    TFT.line(auxt,auxb-1,i,base-1,Cyan);

                    if (myTouch.DataAvailable()) {
                        if (myTouch.DataAvailable()) {
                            TFT.cls();
                            ledv=0;
                            ledr=0;
                            c=1;
                            break;
                        }
                    }
                    if(i==290) {
                        i=30;
                        TFT.cls();
                        TFT.set_font((unsigned char*) Arial24x23);
                        TFT.locate(18,40);
                        TFT.printf("C");
                        TFT.locate(296,209);
                        TFT.printf("t");
                        //Eje X
                        TFT.line(10,215,290,215,White);
                        TFT.line(10,217,290,217,White);
                        TFT.line(10,216,290,216,White);
                        //Eje Y
                        TFT.line(27,224,27,45,White);
                        TFT.line(28,224,28,45,White);
                        TFT.line(29,224,29,45,White);

                        TFT.set_font((unsigned char*) Arial12x12);
                        //Limite
                        TFT.locate(45,40);
                        TFT.printf("Temp.Max:");
                        //0°
                        TFT.locate(1,212);
                        TFT.printf("0");
                        //20°
                        TFT.locate(1,165);
                        TFT.printf("20");
                        TFT.line(20,169,290,169,White);
                        //40°
                        TFT.locate(1,121);
                        TFT.printf("40");
                        TFT.line(20,125,290,125,White);
                        //60°
                        TFT.locate(1,77);
                        TFT.printf("60");
                        TFT.line(20,81,290,81,White);
                    }

                }


                if (myTouch.DataAvailable()) {
                    TFT.cls();
                    ledv=0;
                    ledr=0;
                    c=1;
                }
            }
        }

//Lampara UV
        if (y>0&&y<15&&x>0&&x<69) {

            if(c!=1) {
                teclado();
            }
            while(c!=1) {
                if(desin==true) {

                    wait(1);

                    servo=0.021;
                    desin=false;
                }
                if (myTouch.DataAvailable()) {
                    if(myTouch.Read()) {

                        x = myTouch.GetX(); // toma x del touch
                        y = myTouch.GetY(); // toma y del touch


                        //1
                        if (y>75&&y<100&&x>115&&x<140) {
                            a=1;
                        }
                        //2
                        else if (y>75&&y<93&&x>94&&x<115) {
                            a=2;
                        }
                        //3
                        else if (y>75&&y<92&&x>70&&x<100) {
                            a=3;
                        }
                        //4
                        else if (y>49&&y<74&&x>117&&x<136) {
                            a=4;
                        }
                        //5
                        else if (y>54&&y<74&&x>94&&x<115) {
                            a=5;
                        }
                        //6
                        else if (y>50&&y<75&&x>67&&x<92) {
                            a=6;
                        }
                        //7
                        else if (y>25&&y<50&&x>117&&x<140) {
                            a=7;
                        }
                        //8
                        else if (y>26&&y<49&&x>89&&x<115) {
                            a=8;
                        }
                        //9
                        else if (y>26&&y<54&&x>74&&x<94) {
                            a=9;
                        }
                        //0
                        else if (y>0&&y<25&&x>94&&x<115) {
                            a=0;
                        }
                        //Enter
                        else if (y>0&&y<25&&x>74&&x<94) {
                            if(sumat==1) {
                                //Activa rele
                                aux=1;
                                if(b==1) {
                                    TFT.cls();
                                    if(aux==1) {
                                        conteo(totalt[0]);
                                    }
                                } else if(b==2) {
                                    conteo(totalt[1]);
                                }
                                b=2;
                                sumat=0;
                            }
                        }
                        //Devolverse
                        else if (y>0&&y<26&&x>119&&x<136) {
                            c=1;
                            a=0;
                            b=2;
                            v1[0]=0;
                            v1[1]=0;
                            totalt[0]=0;
                            totalt[1]=0;

                        } else {
                            b=2;
                        }
                        wait(0.2);
                        v1[b]=a;
                        if(b==0) {
                            TFT.locate(200,120);
                            totalt[0]=v1[0];
                            TFT.printf("0%i:00",totalt[0]);
                            b++;
                        } else if(b==1) {
                            TFT.locate(200,120);
                            totalt[1]=v1[0]*10+v1[1];
                            TFT.printf("%i:00",totalt[1]);
                            b++;
                        } else if(b>1) {
                            TFT.locate(200,120);
                            TFT.printf("00:00");
                            a=0;
                            b=0;
                            v1[0]=0;
                            v1[1]=0;
                            if(c==1) {
                                TFT.cls();
                            }
                        }
                        sumat=1;
                    }
                }
                if(p==1) {

                    if(numllegada==1) {
                        TFT.locate(200,120);
                        TFT.printf("0%i:00",CharAEntero(dato[0]));
                        wait(2);
                    }
                    if(numllegada==3) {
                        TFT.locate(200,120);
                        TFT.printf("%i:00",(CharAEntero(dato[1])*10+CharAEntero(dato[2])));
                        wait(0.5);
                        conteo(CharAEntero(dato[1])*10+CharAEntero(dato[2]));
                        numllegada=0;

                    }
                    if(numllegada==1) {
                        conteo(CharAEntero(dato[0]));
                    }
                    p=0;
                }


            }
        }
    }
}