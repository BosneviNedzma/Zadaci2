#include <iostream>
using namespace std;

int br=0;
void toranj (int a, char from, char aux, char to){
	if (a==1){
		cout<<++br<<". Pomjeri disk 1 sa "<<from<<" na "<<to<<endl;
		return;
	}else {
		toranj (a-1, from, to, aux);
		cout<<++br<<". Pomjeri disk "<<a<<" sa "<<from<<" na "<<to<<endl;
		toranj (a-1, aux, from, to);
	}
}

int main(){
	int a;
	cout<<"Unesite broj diskova: ";
	cin>>a;
	cout<<"\nAlgoritam za rješenje igre Tornjevi Hanoja sa "<<a<<" diskova: \n";
	toranj (a, 'A', 'B', 'C');
	
	
	return 0;
}
