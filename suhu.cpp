#include <iostream.h>
#include <conio.h>
using namespace std;

int main()
{
    float C,F,K,R;
    cout<<"\t=== PROGRAM KONVERSI SUHU ==="<<endl;
    cout<<"\t   FAKHRIKMT.BLOGSPOT.COM"<<endl<<endl;
    cout<<"Masukkan Nilai Celciusnya = ";
    cin>>C;
    F=C*1.8 + 32;
    K=C+273.15;
    R=C*0.8;
    cout<<endl;
    cout<<"Nilai Fahrenheit = "<<F<<endl<<"Nilai Kelvin     = "<<K<<endl<<"Nilai Reamur     = "<<R;
    getch();
}
