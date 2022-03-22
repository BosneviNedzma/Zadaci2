#include <iostream>
using namespace std;

int suma(){
	int a;
	cout<<"Unesite broj: ";
	cin>>a;
	if (a==0){
		return 0;
	}else {
		return a+suma();
	}
	
}

int main(){

int s=suma();
cout<<"Suma brojeva iznosi: "<<s<<endl;
	return 0;
}
