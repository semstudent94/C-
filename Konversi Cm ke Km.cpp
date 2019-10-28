#include <iostream>
using namespace std;
int main()
{
                long int jml,km,sisakm,m,sisam,cm;
                cout<<"===== Konversi cm ======"<<endl;
                cout<<"Masukan Jarak = "; cin>>jml;
                cout<<endl;
                cout<<"===== Hasil Konversi ====="<<endl;
                km=jml/100000;
                sisakm=jml%100000;
                m=sisakm/100;
                sisam=sisakm%100;
                cm=sisam;
                cout<<"Semut menempuh jarak sejauh : "<<km<<" km + "<<m<<" m + "<<cm<<" cm"<<endl;
                return 0;
}
