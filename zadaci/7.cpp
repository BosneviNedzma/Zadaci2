#include <iostream>
using namespace std;

int sumaNiza (int niz[], int a){
	if (a==0){
		return 0;
	}else{
		return niz[a-1]+sumaNiza(niz,a-1);
	}
}

int main(){
	
	int niz[5];
	cout<<"Unesite clanove niza:\n";
	for (int i=0; i<5; i++){
		cout<<i+1<<". clan: ";
		cin>>niz[i];
	}
	
	cout<<"Suma ovog niza iznosi: "<<sumaNiza(niz,5);
	
	
	return 0;
}
