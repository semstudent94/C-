#include <iostream>
using namespace std;
int main()
{
                int jml,tahun,sisatahun,bulan,sisabulan,hari;
                cout<<"===== Konversi Hari ======"<<endl;
                cout<<"Masukan Jumlah Hari = "; cin>>jml;
                cout<<endl;
                cout<<"===== Hasil Konversi ====="<<endl;
                tahun=jml/365;
                sisatahun=jml%365;
                bulan=sisatahun/30;
                sisabulan=sisatahun%30;
                hari=sisabulan;
                cout<<tahun<<"  Tahun"<<endl;
                cout<<bulan<<"  Bulan"<<endl;
                cout<<hari<<" Hari"<<endl;
                return 0;
}
