#include <iostream>
using namespace std;

int main (){

	/*Nama 	: Vidya Sinta Billkis 
	Kelas 	: B
	NPM 	: 2117051029*/
	
	int jumlahBilangan;
	double nilai, jumlah, rata;
	
	cin >>jumlahBilangan;
	
	for (int y = 0; y < jumlahBilangan; y++){
		cin >>nilai;
		jumlah += nilai;
	}
	
	rata=jumlah/jumlahBilangan;
	cout <<endl;
	cout <<jumlah<<endl;
	cout <<rata<<endl;
	
	return 0;
}
