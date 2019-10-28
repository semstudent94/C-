#include <iostream>
using namespace std;

int main()
{
                float C,F,K,R;
                cout<<"Program Konversi Suhu"<<endl;
                cout<<"Ariefuryan"<<endl<<endl;
                cout<<"Masukan Nilai Celciusnya = ";
                cin>>C;
                F=C*1.8 + 32;
                K=C+273.15;
                R=C*0.8;
                cout<<"Nilai Fahrenheit = "<<F<<endl<<"Nilai Kelvin = "<<K<<endl<<"Nilai Reamur = "<<R;
                return 0;
}
