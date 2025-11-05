#include <iostream>
using namespace std;
double jumlahnilai, jumlahdata, rataan;
int nilai[100];
void mean (double &jumlahnilai, double &rataan, double &jumlahdata)
{
	rataan=jumlahnilai/jumlahdata;
}
int jumlah(int nilai[])
{
	double  temp = 0;
	for (int i=0; i<jumlahdata;i++)
	{
		temp += nilai [i];
	}
	return temp;
}
int main ()
{
	cout<<"Masukan Jumlah Nilai: ";
	cin>>jumlahdata;
	for (int i=0; i<jumlahdata;i++)
	{
		cout<<"Nilai Ke-"<<i+1<<" : ";
		cin>>nilai[i];
	}
	jumlahnilai = jumlah(nilai);
	mean(jumlahnilai,rataan,jumlahdata);
	cout<<"Rata-rata: "<<rataan<<endl;
	if (rataan >= 70){
		cout<<"Status: LULUS";
	}
	else {
		cout<<"Status: TIDAK LULUS";
	}
}
