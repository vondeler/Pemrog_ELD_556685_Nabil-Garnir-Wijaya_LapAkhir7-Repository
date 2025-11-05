#include <iostream>
#include <iomanip>
using namespace std;
double celcius[100];
double farenheit[100];
double kelvin[100];
int jumlah;
void ubah(double celcius[])
{
	for(int i=0;i<jumlah;i++)
	{
		farenheit [i] = (celcius [i]* 9 / 5) + 32;
		kelvin [i] = celcius [i] + 273.15;
	}
}

int main(){
	cout<<"Masukan jumlah data suhu: ";
	cin>>jumlah;
	for(int i=0;i<jumlah;i++)
	{
		cout<<"Masukkan suhu ke-"<<i+1<<" (Celcius): ";
		cin>>celcius[i];
	}
	ubah(celcius);
		cout<<endl<<"Celcius"<<setw(10)<<"Farenheit"<<setw(10)<<"Kelvin"<<endl;
		cout<<"-------------------------------------------"<<endl;
	for(int i=0;i<jumlah;i++)
	{
	cout<<fixed<<setprecision(2)<<celcius[i]<<setw(10)<<farenheit[i]<<setw(15)<<kelvin[i]<<endl;
	
	}
}
