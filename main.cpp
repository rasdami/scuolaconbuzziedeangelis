/*
nomi: Buzzi Christian , Rastelli Damiano
classe: 3bi
data: 21/02/2023
versione: 1.1
testo: gestione area e perimetro di figure geometriche
*/
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <unistd.h>
#define PGRECO 3.14
using namespace std;

void menu();
double Area_quadrato(double lato);
double Perimetro_quadrato(double lato);
double Area_Scaleno(double base,double altezza);
double Perimetro_Scaleno(double base,double lato, double lato1);
double Area_rettangolo(double base,double altezza);
double Perimetro_rettangolo(double base, double altezza);
double Area_cerchio(double raggio);
double raggio,base,altezza,lato,lato1,Area,Perimetro;

int main()
{
    menu();
    return 0;
}


void menu()
{
    int n,esci=0;
    do
    {
    cout<<"inserisci 1 per fare l'area del quadrato\n";
    cout<<"inserisci 2 per fare il perimetro del quadrato\n";
    cout<<"inserisci 3 per fare l'area del triangolo scaleno\n";
    cout<<"inserisci 4 per fare il perimetro del triangolo scaleno\n";
    cout<<"inserisci 5 per fare l'area del rettangolo\n";
    cout<<"inserisci 6 per fare il perimetro del rettangolo\n";
    cout<<"inserisci 7 per fare l'area del cerchio\n";
    cout<<"inserisci 8 per finire il programma\n";
    cin>>n;

    switch(n)
    {
    case 1:
      cout<<"inserisci il lato del quadrato\n";
      cin>>lato;
      Area_quadrato(lato);
      cout<<"l'area del quadrato è\t"<<Area<<"\n";

    break;
    case 2:
      cout<<"inserisci un lato del quadrato\n";
      cin>>lato;
      Perimetro_quadrato(lato);
      cout<<"il perimetro del quadrato è\t"<<Perimetro<<"\n";

    break;
    case 3:
      cout<<"inserisci la base del triangolo scaleno\n";
      cin>>base;
      cout<<"inserisci la altezza del triangolo scaleno\n";
      cin>>altezza;
       Area_Scaleno(base,altezza);
      cout<<"l'area del triangolo scaleno è\t"<<Area<<"\n";

    break;
    case 4:
      cout<<"inserisci la base del triangolo scaleno\n";
      cin>>base;
      cout<<"inserisci un lato del triangolo scaleno\n";
      cin>>lato;
      cout<<"inserisci un lato del triangolo scaleno\n";
      cin>>lato1;
       Perimetro_Scaleno(base,lato,lato1);
      cout<<"il perimetro del triangolo scaleno è\t"<<Perimetro<<"\n";

    break;
    case 5:
      cout<<"inserisci la base del rettangolo\n";
      cin>>base;
      cout<<"inserisci la altezza del rettangolo\n";
      cin>>altezza;
       Area_rettangolo(base,altezza);
      cout<<"l'area del rettangolo è\t"<<Area<<"\n";

    break;
        case 6:
      cout<<"inserisci la base del rettangolo\n";
      cin>>base;
      cout<<"inserisci la altezza del rettangolo\n";
      cin>>altezza;
       Perimetro_rettangolo(base,altezza);
      cout<<"il perimetro del rettangolo è\t"<<Perimetro<<"\n";

    break;
    case 7:
      cout<<"inserisci il raggio del cerchio \n";
      cin>>raggio;
       Area_cerchio(raggio);
      cout<<"l'area del cerchio è\t"<<Area<<"\n";

    break;
    case 8: esci=1; cout<<"arrivederci\n";
            exit;
            break;
    default :
        cout<<"il numero è sbagliato rinserire un altro numero\n";
    }
    sleep(2);
    system("clear");
    }while(esci==0);
}
double Area_quadrato(double lato)
{
    Area=pow(lato,2);
    return Area;
}
double Perimetro_quadrato(double lato)
{
 Perimetro=lato*4;
 return Perimetro;
}
double Area_Scaleno(double base,double altezza)
{
  Area=(base*altezza)/2;
  return Area;
}
double Perimetro_Scaleno(double base,double lato, double lato1)
{
  Perimetro=base+lato+lato1;
  return Perimetro;
}
double Area_rettangolo(double base,double altezza)
{
  Area=base*altezza;
  return Area;
}
double Perimetro_rettangolo(double base, double altezza)
{
  Perimetro=(base+altezza)*2;
  return Perimetro;
}
double Area_cerchio(double raggio)
{

   Area=pow(raggio,2)*PGRECO;
   return Area;
}







