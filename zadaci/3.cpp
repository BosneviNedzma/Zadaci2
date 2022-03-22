#include <iostream>
using namespace std;

int NZD (int a, int b){
	if (b==0){
		return a;
	}else{
		return NZD(b, a%b);
	}
}

int main(){
int a,b;

do{
	cout<<"Unesite prvi prirodni broj: ";
	cin>>a;
}while (a<1);

do{
	cout<<"Uesite drugi prirodni broj: ";
	cin>>b;
}while (b<1);

cout<<"NZD ("<<a<<","<<b<<") = "<<NZD(a,b)<<endl;

	return 0;
}
