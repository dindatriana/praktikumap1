	#include <iostream>
	
	using namespace	std;
	
	int main(){
	
	double n1,n2,n3;
	cout<<"Program Menghitung Bunga Tunggal\n\n:";
	cout<<"masukan tabungan akhir\t:";
	cin>>n1;
	cout<<"masukan bunga pertahun\t:";
	cin>>n2;
	cout<<"masukan lama menabung\t:";
	cin>>n3;
	cout<<fixed<<"Tabungan Awal \t\t:"<<1/(1+(n2/100)*1+(n2/100)*1+(n2/100))*n1;
	
	}             
