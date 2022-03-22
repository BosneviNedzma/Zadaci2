#include <iostream>
using namespace std;

int Fibonacci (int a){
	if (a<3){
		return 1;
	}else {
		return Fibonacci(a-2)+Fibonacci(a-1);
	}
}

int main(){
	int a;
	do{cout<<endl;
		cout<<"Unesite prirodan broj: ";
		cin>>a;
	}while (a<1);
	int suma=0;
	cout<<"Fibonaccijev niz: ";
	for (int i=1; i<=a; i++){
		cout<<Fibonacci(i)<<" ";
		suma += Fibonacci(i);
	}
	
	cout<<"\nSuma Fibonaccijevog niza je: "<<suma<<endl;
	
	return 0;
}
