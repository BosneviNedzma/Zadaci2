#include <iostream>
using namespace std;

int faktorijel (int a){
	if (a==0 || a==1){
		if (a==0){
			cout<<"0 = ";
			return 1;
		}else {
			cout<<"1 = ";
			return 1;
		}
	}else {
		cout<<a<<"*";
		return a*faktorijel(a-1);
	}
}

int main(){
	
	int a;
	do{
		cout<<"Unesite neki broj: ";
		cin>>a;
	}while (a<0);

cout<<a<<"! ="<<faktorijel(a)<<endl;

	return 0;
}
