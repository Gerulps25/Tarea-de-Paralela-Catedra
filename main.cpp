#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<cstdlib>
#include<fstream>

using namespace std;



int main(int argc, char const *argv[])
{
    //crear archivos
    ofstream n1("rango 1.txt");
    ofstream n2("rango 2.txt");
    ofstream n3("rango 3.txt");
    ofstream n4("rango 4.txt");
    ofstream n5("rango 5.txt");
    ofstream n6("rango 6.txt");
    ofstream n7("rango 7.txt");
    ifstream fin("num.txt");


    string valor,aux;
    int i=0;
    float num;
    double A[100000],sum1,B[100000],prom,sum;

   while(fin>> valor){
   aux=valor;
   aux[1]='.';
   num=strtof((aux).c_str(),0);

//Archivos separados por rangos (de 1,0 a 1,9 ; de 2,0 a 3,9 ; etc)
   if (num>=1.0 & num<2.0)
   {
    n1<<aux<<endl;
   }
   if (num>=2.0 & num<3.0)
   {
    n2<<aux<<endl;
   }
   if (num>=3.0 & num<4.0)
   {
    n3<<aux<<endl;
   }
   if (num>=4.0 & num<5.0)
   {
    n4<<aux<<endl;
   }
   if (num>=5.0 & num<6.0)
   {
    n5<<aux<<endl;
   }
   if (num>=6.0 & num<=7.0)
   {
    n6<<aux<<endl;
   }

// Codigo para calcular el Promedio

     prom=((1.5*A[0])+(2.5*A[1])+(3.5*A[2])+(4.5*A[3])+(5.5*A[4])+(6.5*A[5]))/sum1;


     int k;
     double mayor=A[0],mod;
     for(int i=0;i<=5;i++)
     {
        if(mayor<=A[i]){
           mayor=A[i];
           k=i;
        }
     }

   if(k==0)
    mod=(1.0+((A[0]-0)/((A[0]-0)+(A[0]-0))));

   if(k==1)
    mod=(2.0+((A[1]-A[0])/((A[1]-A[0])+(A[1]-A[2]))));

   if(k==2)
    mod=(3.0+((A[2]-A[1])/((A[2]-A[1])+(A[2]-A[3]))));

   if(k==3)
    mod=(4.0+((A[3]-A[2])/((A[3]-A[2])+(A[3]-A[4]))));

   if(k==4)
    mod=(5.0+((A[4]-A[3])/((A[4]-A[3])+(A[4]-A[5]))));

   if(k==5)
    mod=(6.0+((A[5]-A[4])/((A[5]-A[4])+(A[5]-0))));

    //Codigo para calcular la Mediana
    float med;
      if((sum1/2)>=0 & (sum1/2)<B[0])
          med=1.0+((sum1/2)/A[0]);

      if((sum1/2)>=B[0] & (sum1/2)<B[1])
          med=2.0+(((sum1/2)-B[0])/A[1])*1.0;

      if((sum1/2)>=B[1] & (sum1/2)<B[2])
          med=3.0+(((sum1/2)-B[1])/A[2])*1.0;

      if((sum1/2)>=B[2] & (sum1/2)<B[3])
          med=4.0+(((sum1/2)-B[2])/A[3])*1.0;

      if((sum1/2)>=B[3] & (sum1/2)<B[4])
          med=5.0+(((sum1/2)-B[3])/A[4])*1.0;

      if((sum1/2)>=B[4] & (sum1/2)<B[5])
          med=6.0+(((sum1/2)-B[4])/A[5])*1.0;


        //Codigo para sacar la Desviacion Estandar

        double sum2= pow(1.5-prom,2)*A[0]+pow(2.5-prom,2)*A[1]+pow(3.5-prom,2)*A[2]+pow(4.5-prom,2)*A[3]+pow(5.5-prom,2)*A[4]+pow(6.5-prom,2)*A[5];

        float des= sum2/sum1;

        des=sqrt(des);


        //Codigo para sacar la Suma
        sum=sum+num;
        if (num>=1.0 & num<2.0)
        {
         A[0]=A[0]+1;
        }
         if (num>=2.0 & num<3.0)
         {
          A[1]=A[1]+1;
         }
         if (num>=3.0 & num<4.0)
         {
           A[2]=A[2]+1;
          }
         if (num>=4.0 & num<5.0)
         {
          A[3]=A[3]+1;
         }
        if (num>=5.0 & num<6.0)
        {
          A[4]=A[4]+1;
         }
         if (num>=6.0 & num<=7.0)
        {
          A[5]=A[5]+1;
         }
      }
      }
