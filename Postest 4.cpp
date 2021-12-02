#include <iostream>
using namespace std;

int main (){
	int hari;
	double rata2, jumlah, konversi;
	
	cin >> hari;
	
	double x[hari]; 
	
	for (int i=0; i<hari; i++){
		cin >> x[i];
		jumlah += x[i]; 
	}
	
	rata2 = jumlah/hari;
	konversi = jumlah*4000;
	cout << endl;
	cout << rata2 << " ETH " <<endl;
	cout << jumlah << " ETH " << endl; 
	cout << "$" << konversi <<endl;
	
	return 0;
}
