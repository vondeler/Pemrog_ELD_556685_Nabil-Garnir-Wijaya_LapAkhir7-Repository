#include <iostream>
using namespace std;
int a,b;
void value(int a, int b){
	int c1;
	c1=a;
	a=b;
	b=c1;
}
void reference(int &a, int &b){
	int c2;
	c2=a;
	a=b;
	b=c2;
}
int main(){
	cout<<"Masukan Bilangan Pertama: ";
	cin>>a;
	cout<<"Masukan Bilangan Kedua: ";
	cin>>b;
	cout<<"Sebelum Ditukar a = "<<a<<", b = "<<b<<endl;
	value(a,b);
	cout<<"Setelah Tukar by Value a = "<<a<<", b = "<<b<<endl;
	reference(a,b);
	cout<<"Setelah Tukar by reference a = "<<a<<", b = "<<b<<endl;
}
