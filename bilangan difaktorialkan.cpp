#include <iostream>
using namespace std;

int main(){
	int a,b,i;
	
	cout<<"masukan bilangan yang difaktorialkan:" ;
	cin>>a;
	
	b=a;
	cout<<a<<"!=" ;
	for (int i=1;i<=b;i++){
		cout<<i;
		if(i==a){
			cout<<"=";
			}else{
				cout<<"*";
			}
	}
	for (int i=1;a>1;){
		a=a-1;
		b=b*a;
	}
	cout<<b;
}
