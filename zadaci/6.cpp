#include <iostream>
using namespace std;

int maks=INT_MIN;

void maksE(){
	int n;
	cout<<"Unesite broj: ";
	cin>>n;
	if (n<1){
		if (maks == INT_MIN) maks = n;
		return;
	}else{
		if (n>maks) maks = n;
		maksE();
	}
}

int main(){
maksE();
cout<<"Najveci uneseni broj je: "<<maks<<endl;

	return 0;
}
