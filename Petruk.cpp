#include <iostream>
using namespace std;
void segitiga(float *panjang,float *lebar)
{
    float a,b;
    cout<<" Masukkan sisi panjang = ";
    cin>>a;
    cout<<" Masukkan sisi lebar = ";
    cin>>b;
    *panjang=a;
    *lebar=b;
   
    }
void bjursangkar(float *panjang)
{
    float sisi;
    cout<<" Masukkan panjang sisi = ";
    cin>>sisi;
    *panjang=sisi;
    }

/* ---------------------------------*/
/*       Menu utama program         */
/*----------------------------------*/
int main ()
{
    float pnjg,lbr,hasil;
    long p;
    do {
        cout<<endl<<"TUGAS 2 PETRUK"<<"Krisna-Zulfikar-Weidz"<<endl<<endl;
    cout<<"============================== \3\3\3>>>"<<endl;
    cout<<" Masukkan pilihan : "<<endl;
    cout<<" 1. Menghitung Segitiga "<<endl;
    cout<<" 2. Menghitung Bujur sangkar"<<endl;
    cout<<" 3. Keluar "<<endl<<endl;
    cout<<" Masukkan Pilihan = ";
    cin>>p;
    cout<<endl<<endl;
   
    switch (p)
    {
           case 1 :
                {
                     segitiga (&pnjg,&lbr);
                     hasil=(pnjg/2)*lbr;
                     cout<<" Luas segitiga = "<<hasil;
                     break;
                     }
           case 2 :
                {
                    bjursangkar(&pnjg);
                    hasil=pnjg*pnjg;
                    cout<<" Luas bujur sangkar = "<<hasil;
                    break;
                     }
           case 3 :
                {
                     return 0;
                     break;
                     }
           default :
                   {
                           cout<<" INPUT SALAHHH !"<<endl;
                           }
          
          
           }}
           while (p!='3');
           return 0;
   
    }
