include <iostream>
using namespace std;

int main(){ 

	/*Nama	: Vidya Sinta Billkis 
	Kelas 	: B 
	NPM 	: 2117051029
	*/
	
	int gajikaryawan;
	int umr; 
	
//	input 
	cin >>gajikaryawan;
	cin >>umr;
	
//	output 
	cout <<endl;
	if (gajikaryawan<umr){
		cout <<"Gaji Anda di bawah UMR"<<endl;
	}
	else if (gajikaryawan==umr){
		cout <<"Gaji Anda Setara UMR"<<endl;
	}
	else{
		cout <<"Gaji Anda di atas UMR"<<endl;
	}
	
	return 0;
}
