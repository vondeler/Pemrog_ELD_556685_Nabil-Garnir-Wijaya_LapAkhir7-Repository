#include <iostream>
using namespace std;
double jumlah, totalHadir = 0,total,totalpertemuan;
int mhs[100];
void update(double &totalHadir, double &total){
	for (int i=0;i<jumlah;i++){
		totalHadir += mhs[i];
	}
}
int rasio(double totalHadir, double total){
	double rasio;
	rasio = (totalHadir / total)* 100;
	return rasio; 
}
void tampil(double totalHadir, double total){
	update(totalHadir, total);
	cout<<"Total Kehadiran Kelas: "<<totalHadir<<" / "<<total<<endl;
	cout<<"Persentase Kehadiran: "<<rasio(totalHadir, total)<<"%";
}
int main (){
	cout<<"Masukan Jumlah Mahasiswa: ";
	cin>>jumlah;
	cout<<"Masukan Total Pertemuan: ";
	cin>>totalpertemuan;
	total = totalpertemuan * jumlah;
	for (int i=0;i<jumlah;i++){
		cout<<"Kehadiran Mahasiswa ke-"<<i+1<<" : ";
		cin>>mhs[i];
	}
	
	tampil(totalHadir, total);
	
}
