#include <iostream>
using namespace std;
int main()
{
                long int jml,seceng,sisaseceng,gope,sisagope,cepe,sisacepe,gocap,sisagocap,jigo;
                cout<<"===== Konversi Pecahan Uang ======"<<endl;
                cout<<"Masukan jumlah Uang = "; cin>>jml;
                cout<<endl;
                cout<<"===== Hasil Konversi ====="<<endl;
                seceng=jml/1000;
                sisaseceng=jml%1000;
                gope=sisaseceng/500;
                sisagope=sisaseceng%500;
                cepe=sisagope/100;
                sisacepe=sisagope%100;
                gocap=sisacepe/50;
                sisagocap=sisacepe%50;
                jigo=sisagocap/25;
                cout<<seceng<<" lembar 1000"<<endl;
                cout<<gope<<" lembar 500"<<endl;
                cout<<cepe<<" lembar 100"<<endl;
                cout<<gocap<<" lembar 50"<<endl;
                cout<<jigo<<" lembar 25"<<endl;
                return 0;
}
