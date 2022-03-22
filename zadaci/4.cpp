#include <iostream>
using namespace std;

int silazna(int a, int b){
	if (a>b){
		return 0;
	}else {
		if (b%2==1){
			b--;
		}
		return b*b*b+silazna(a, b-2);
	}
}

int uzlazna (int a, int b){
	if (a>b){
		return 0;
	}else {
		if (a%2==1){
			a++;
		}
		return a*a*a+uzlazna (a+2, b);
	}
}


int dekompozicija (int a, int b){
	if (a==b){
		if (a%2==0){
			return a*a*a;
		}else {
			return 0;
		}
	}else {
		int sr=(a+b)/2;
		return dekompozicija (a, sr)+dekompozicija (sr+1, b);
	}
	
}

int main(){
int a,b;

do{
	cout<<"Unesite prvi broj: ";
	cin>>a;
}while (a<1);

do{
	cout<<"Unesite drugi broj: ";
	cin>>b;
}while (b<1);

cout<<"\nSuma kubova "<<a<<" i "<<b<<" iznosi: "<<silazna(a,b)<<endl;
cout<<"\nSuma kubova "<<a<<" i "<<b<<" iznosi: "<<uzlazna(a,b)<<endl;
cout<<"\nSuma kubova "<<a<<" i "<<b<<" iznosi: "<<dekompozicija(a,b)<<endl;


	return 0;
}
