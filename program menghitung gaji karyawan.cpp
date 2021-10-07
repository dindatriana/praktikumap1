	#include <iostream>
	
	using namespace	std;
	
	int main(){
		cout<<"program menghitung gaji karyawan\n";
		
		
		string nama;
		int jam;
		char golongan;
		
		cout<<"nama karyawan:";
		cin>>nama;
		cout<<"golongan karyawan:";
		cin>>golongan;
		cout<<"jam karyawan:";
		cin>>jam;
		
		switch(golongan){
		case '1' :
			if (jam<=150){
				cout<<"gaji pokok:1000000";
			}else(jam>150);
			cout<<"lembur:"<<(jam-150)*10000<<endl;
			cout<<"gaji total" <<nama<<1000000+((jam-150)*10000);
			break;
		case '2' :
				if (jam<=150){
				cout<<"gaji pokok:2000000";
				cout<<"lembur:"<<(jam-150)*20000;
			}else(jam>150);
			cout<<"lembur:"<<(jam-150)*20000<<endl;
			cout<<"gaji total" <<nama<<2000000+((jam-150)*20000);
			break;
		case '3' :
				if (jam<=150){
				cout<<"gaji pokok:3000000";
			}else(jam>150);
			cout<<"lembur:"<<(jam-150)*30000<<endl;
			cout<<"gaji total" <<nama<<3000000+((jam-150)*30000);
			break;
		case '4' :
				if (jam<=150){
				cout<<"gaji pokok:4000000";
			}else(jam>150);
			cout<<"lembur:"<<(jam-150)*40000<<endl;
			cout<<"gaji total" <<nama<<4000000+((jam-150)*40000);
			break;
		case '5' :
				if (jam<=150){
				cout<<"gaji pokok:5000000";
				cout<<"lembur:"<<(jam-150)*50000;
			}else(jam>150);
			cout<<"lembur:"<<(jam-150)*50000<<endl;
			cout<<"gaji total" <<nama<<5000000+((jam-150)*50000);
			break;
				}
		
		
	}
	
