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



int c=1,a=0,b=0,d=0,totalt[3],v1[50],r=0,l=0,sumat=0,sumac=0,e=0,aux=0,temp=0;
float x=0,y=0,dx=0,dy=0,rad=0,h=-90,radp=0,px=0,py=0,k=-90,vel=0,mx=0,my=0,sumaAngulos=0,temptft=0;
char dato[30],caracter;
int caracterEntrada=0,numi=0,p=0,i=0,numllegada=0,trans=0,caracternum=0,servop[30];

int numstep = 0; //Una vuelta son 512 pasos
int step_speed = 1000; //Velocidad del motor

InterruptIn sensor(D0);

PwmOut servo(D15);

AnalogIn temperatura(A5);

RawSerial pc(USBTX,USBRX);

DigitalOut led1(D2);

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

void teclado(void)
{
    TFT.foreground(Black);
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
    TFT.line(10,20,10,220,Black);
    TFT.line(60,20,60,220,Black);
    TFT.line(110,20,110,220,Black);
    TFT.line(160,20,160,220,Black);

    //Filas
    TFT.line(10,20,160,20,Black);
    TFT.line(10,70,160,70,Black);
    TFT.line(10,120,160,120,Black);
    TFT.line(10,170,160,170,Black);
    TFT.line(10,220,160,220,Black);

    //Titulo
    TFT.locate(190,30);
    TFT.printf("Tiempo:");
    TFT.locate(200,60);
    TFT.printf("00:00");

}
int CharAEntero(char caracterEntrada)
{
    servo.period(0.0248); //periodo es de 25m
    servo=0.021;
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

int AnguloServo(int nEntrada)
{
    switch(nEntrada) {
        case(0):
            servo=0.021;
            break;
        case(5):
            servo=0.02225;
            break;
        case(10):
            servo=0.0235;
            break;
        case(15):
            servo=0.02475;
            break;
        case(20):
            servo=0.02475+0.00125;
            break;
        case(25):
            servo=0.02475+0.00125*2;
            break;
        case(30):
            servo=0.02475+0.00125*3;
            break;
        case(35):
            servo=0.02475+0.00125*5;
            break;
        case(40):
            servo=0.02475+0.00125*6;
            break;
        case(45):
            servo=0.02475+0.00125*7;
            break;
        case(50):
            servo=0.02475+0.00125*8;
            break;
        case(55):
            servo=0.02475+0.00125*10;
            break;
        case(60):
            servo=0.02475+0.00125*11;
            break;
        case(65):
            servo=0.02475+0.00125*13;
            break;
        case(70):
            servo=0.02475+0.00125*14;
            break;
        case(75):
            servo=0.02475+0.00125*15;
            break;
        case(80):
            servo=0.02475+0.00125*17;
            break;
        case(85):
            servo=0.02475+0.00125*18;
            break;
        case(90):
            servo=0.02475+0.00125*20;
            break;

        case(95):
            servo=0.02475+0.00125*22;
            break;
        case(100):
            servo=0.02475+0.00125*23;
            break;
        case(105):
            servo=0.02475+0.00125*25;
            break;
        case(110):
            servo=0.02475+0.00125*26;
            break;
        case(115):
            servo=0.02475+0.00125*28;
            break;
        case(120):
            servo=0.02475+0.00125*29;
            break;
        case(125):
            servo=0.02475+0.00125*31;
            break;
        case(130):
            servo=0.02475+0.00125*33;
            break;
        case(135):
            servo=0.02475+0.00125*35;
            break;
        case(140):
            servo=0.02475+0.00125*36;
            break;
        case(145):
            servo=0.02475+0.00125*37;
            break;
        case(150):
            servo=0.02475+0.00125*39;
            break;
        case(155):
            servo=0.02475+0.00125*40;
            break;
        case(160):
            servo=0.02475+0.00125*42;
            break;
        case(165):
            servo=0.02475+0.00125*44;
            break;
        case(170):
            servo=0.02475+0.00125*45;
            break;
        case(175):
            servo=0.02475+0.00125*47;
            break;
        case(180):
            servo=0.02475+0.00125*49;
            break;
    }
    return servo;
}

int main()
{
    /*
    sensor.mode(PullDown);
    sensor.rise(&IRS_PA_0);
    */

    pc.baud(9600);//sincronizar la comunicacion
    servo.period(0.0248); //periodo es de 25m
    AnguloServo(0);

    pc.attach(&interrupcion_serial);

    TFT.claim(stdout);      // arranca el stdout de la TFT
    TFT.claim(stderr);      // send stderr to the TFT display

    TFT.set_orientation(1);
    TFT.background(LightGrey);
    TFT.foreground(Black);
    TFT.cls();               // clear the screen

    // se ponen los dos codigos inferiores para inicializar el touch
    myTouch.InitTouch();
    myTouch.SetPrecision(PREC_EXTREME);



    while(true) {
        AnguloServo(0);

        TFT.background(LightGrey);
        TFT.foreground(Black);
        TFT.set_font((unsigned char*) Arial24x23);

        TFT.locate(1,20);
        printf("Universidad Distrital");
        TFT.locate(10,60);
        TFT.printf("Facultad Tecnológica");

        TFT.set_font((unsigned char*) Arial12x12);

        TFT.locate(25,100);
        TFT.printf("Fredy Esteban Camacho Ibanez");
        TFT.locate(25,120);
        TFT.printf("Cod: 20191573006");
        TFT.locate(25,140);
        TFT.printf("Tec. Electronica");

        TFT.fillrect(10,190,100,230,Blue);
        TFT.locate(40,205);
        TFT.background(Blue);
        TFT.foreground(White);
        TFT.printf("LM35");

        TFT.fillrect(115,190,205,230,Blue);
        TFT.locate(140,205);
        TFT.background(Blue);
        TFT.foreground(White);
        TFT.printf("LUZ UV");

        TFT.fillrect(220,190,310,230,Blue);
        TFT.locate(240,200);
        TFT.background(Blue);
        TFT.foreground(White);
        TFT.printf("PASO A");
        TFT.locate(245,215);
        TFT.printf("PASO");
        TFT.foreground(Black);
        TFT.background(LightGrey);

        while(c==1) {


            // Aqui empieza el codigo para ver las coordenadas del tactil
            if (myTouch.DataAvailable()) {
                if(myTouch.Read()) {
                    x = myTouch.GetX(); // toma x del touch
                    y = myTouch.GetY(); // toma y del touch
                    /*TFT.locate(60,60);
                    TFT.printf("%.0f , %.0f  ", x, y);
                    */
                    if (y>0&&y<15&&x>96&&x<140) {
                        c++;
                    }
                    if (y>0&&y<15&&x>47&&x<89) {
                        c++;
                    }
                    if (y>0&&y<15&&x>0&&x<39) {
                        c++;
                    }
                }
            }
            //Aqui termina el codigo para ver las coordenadas del tactil
        }

//Temperatura
        if (y>0&&y<15&&x>99&&x<140) {
            TFT.cls();

            while(c!=1) {

            }
        }

//Lampara UV
        if (y>0&&y<15&&x>0&&x<39) {
            teclado();
            while(c!=1) {
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
                            TFT.fillcircle(250,119,40,LightGrey);
                            if(sumat==1) {
                                //Activa rele
                                aux=1;
                                if(b==1) {
                                    TFT.foreground(Red);
                                    TFT.cls();
                                    if(aux==1) {
                                        for (int i=5; i>=0; i--) {
                                            wait(1);
                                            //Desactiva rele
                                            TFT.locate(60,60);
                                            TFT.printf("Tiene %i para",i);
                                            TFT.locate(30,100);
                                            TFT.printf("retirarse del lugar");
                                        }
                                        TFT.cls();
                                        for(int i=0; i<=totalt[0]; i++) { //Si quiero minutos se multiplica el vector por *60
                                            TFT.foreground(Black);
                                            led1=1;
                                            TFT.locate(40,60);
                                            TFT.printf("Desinfectando...");
                                            TFT.locate(180,90);
                                            TFT.printf("%i",i);
                                            wait(1);
                                        }
                                        led1=0;
                                        teclado();
                                        aux=0;
                                    }
                                } else if(b==2) {
                                    TFT.foreground(Red);
                                    TFT.cls();
                                    if(aux==1) {
                                        for (int i=5; i>=0; i--) {
                                            wait(1);
                                            //desactiva rele
                                            TFT.locate(60,60);
                                            TFT.printf("Tiene %i para",i);
                                            TFT.locate(30,100);
                                            TFT.printf("retirarse del lugar");
                                        }
                                        TFT.cls();
                                        for(int i=0; i<=totalt[1]; i++) { //Si quiero minutos se multiplica el vector por *60
                                            TFT.foreground(Black);
                                            led1=1;
                                            TFT.locate(40,60);
                                            TFT.printf("Desinfectando...");
                                            TFT.locate(170,100);
                                            TFT.printf("%i",i);
                                            wait(1);
                                        }
                                        led1=0;
                                        teclado();
                                        aux=0;
                                    }
                                }
                                b=2;
                                sumat=0;
                            }
                        }
                        //Devolverse
                        else if (y>0&&y<26&&x>119&&x<136) {
                            c=1;
                            a=0;
                            b=0;
                            v1[0]=0;
                            v1[1]=0;
                            totalt[0]=0;
                            totalt[1]=0;
                            TFT.cls();
                        }
                        wait(0.2);
                        v1[b]=a;
                        if(b==0) {
                            TFT.locate(200,60);
                            totalt[0]=v1[0];
                            TFT.printf("0%i:00",totalt[0]);
                            b++;
                        } else if(b==1) {
                            TFT.locate(200,60);
                            totalt[1]=v1[0]*10+v1[1];
                            TFT.printf("%i:00",totalt[1]);
                            b++;
                        } else if(b>1) {
                            TFT.locate(200,60);
                            TFT.printf("00:00");
                            a=0;
                            b=0;
                            v1[0]=0;
                            v1[1]=0;
                        }
                        sumat=1;
                    }
                }
            TFT.set_font((unsigned char*) Arial24x23);
                temperatura.read();
                temp=(temperatura*330);
                temptft=(temperatura*330);
                
                TFT.locate(190,100);
                TFT.printf("Grados:");
                
                TFT.locate(200,130);
                TFT.printf("%0.1f C",temptft);
                pc.printf("%i\r\n",temp);
                wait(0.4);
            
            }
        }
    }
}