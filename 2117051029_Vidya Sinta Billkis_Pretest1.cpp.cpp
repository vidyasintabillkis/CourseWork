#include <iostream>
using namespace std;

int main(){
	/*vidya Sinta Billkis
	Kelas B
	2117051029
	*/
	
string nama;
string alamat;
string email;
string nomor;
	getline(cin,nama);
	getline (cin,alamat);
	cin>>email;
	cin>>nomor;
	
	cout<<endl;
	cout<<"Nama Pelanggan  = "<<nama<<endl;
	cout<<"Alamat Rumah	= "<<alamat<<endl;
	cout<<"Email pelanggan = "<<email<<endl;
	cout<<"Nomor Telepon   = "<<nomor<<endl;
	return 0;
}
