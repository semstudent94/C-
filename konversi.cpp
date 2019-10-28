#include <iostream> 
void main() 
{ 

	float suhu, hasil;
	int kode;
	char pilih; 
	clrscr(); cout<<" Konversi Suhu"<<endl; 
	cout<<" ---------------------"<<endl; 
	cout<<"================MENU================"<<endl; 
	cout<<" 1. Celcius -> Reamur "<<endl; 
	cout<<" 2. Celcius -> Fahrenheit "<<endl; 
	cout<<" 3. Celcius -> Kelvin "<<endl; 
	cout<<" 4. Reamur -> Celcius "<<endl; 
	cout<<" 5. Reamur -> Fahrenheit "<<endl; 
	cout<<" 6. Reamur -> Kelvin "<<endl; 
	cout<<" 7. Fahrenheit -> Celcius "<<endl; 
	cout<<" 8. Fahrenheit -> Reamur "<<endl; 
	cout<<" 9. Fahrenheit -> Kelvin "<<endl; 
	cout<<" 10.Kelvin -> Celcius "<<endl; 
	cout<<" 11.Kelvin -> Reamur "<<endl; 
	cout<<" 12.Kelvin -> Fahrenheit "<<endl; 
	cout<<"===================================="<<endl; 
	cout<<endl; 
	cout<<"Masukkan Kode Angka Menu Yang Anda Pilih= "; 
	cin>>kode; 
	cout<<endl; }
	switch(kode) 
	{ 
		case 1: 
		cout<<"Masukkan Suhu Dalam Celcius ="; 
		cin>>suhu; hasil= 0.8*suhu; 
		cout<<"Suhu Dalam Reamur ="<<hasil<<endl;  
		break; case 2: 
		cout<<"Masukkan Suhu Dalam Celcius = "; 
		cin>>suhu; hasil= 1.8*suhu+32; 
		cout<<"Suhu Dalam Fahrenheit ="<<hasil<<endl; 
		case 3: cout<<"Masukkan Suhu Dalam Celcius = "; 
		cin>>suhu; hasil= suhu+273,15; 
		cout<<"Suhu Dalam Kelvin ="<<hasil<<endl;  
		break; 
		case 4: 
		cout<<"Masukkan Suhu Dalam Reamur = "; 
		cin>> suhu ; 
		hasil= 1.25*suhu; 
		cout<<"Suhu Dalam Celcius ="<<hasil<<endl;  
		break; 
		case 5: 
		cout<<"Masukkan Suhu Dalam Reamur = "; 
		cin>>suhu ; 
		hasil= 2.25*suhu+32; 
		cout<<"Suhu Dalam Fahrenheit = " <<hasil<<endl;  
		break; 
		case 6: 
		cout<<"Masukkan Suhu Dalam Reamur = "; 
		cin>>suhu ; 
		hasil= suhu/0,8+273,15; 
		cout<<"Suhu Dalam Kelvin = " <<hasil<<endl;  
		break; 
		case 7: cout<< "Masukkan Suhu Dalam Fahrenheit = "; 
		cin>>suhu; 
		hasil= 5*(suhu-32)/9; 
		cout<<"Suhu Dalam Celcius = " <<hasil<<endl;  
		break; 
		case 8: c
		out<<"Masukkan Suhu Dalam Fahrenheit = "; 
		cin>>suhu; 
		hasil= 9*(suhu-32)/4; 
		cout<<"Suhu Dalam Reamur = " <<hasil<<endl;  
		break; 
		case 9: 
		cout<<"Masukkan Suhu Dalam Fahrenheit = "; 
		cin>>suhu; 
		hasil= (suhu+459,67)/1,4; 
		cout<<"Suhu Dalam Kelvin = " <<hasil<<endl;  
		break; 
		case 10: cout<<"Masukkan Suhu Dalam Kelvin = "; 
		cin>>suhu; 
		hasil= suhu-273,15; 
		cout<<"Suhu Dalam Celcius = " <<hasil<<endl;  
		break; 
		case 11: cout<<"Masukkan Suhu Dalam Kelvin = "; 
		cin>>suhu; 
		hasil= (suhu-273,15)*0,8; 
		cout<<"Suhu Dalam Reamur = " <<hasil<<endl;  
		break; c
		ase 12: 
		cout<<"Masukkan Suhu Dalam Kelvin = "; 
		cin>>suhu; 
		hasil= suhu*1,8-459,67; 
		cout<<"Suhu Dalam Fahrenheit = " <<hasil<<endl;  
		break; 
		default: cout<<"Kode angka salah" <<endl;  
		break; 
		} 
		cout<<endl; 
		cout<<endl;
