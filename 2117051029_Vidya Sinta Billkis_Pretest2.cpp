#include <iostream>
using namespace std;

int main(){
	
	/*Nama 	: Vidya Sinta Billkis
	Kelas	: B
	NPM 	: 2117051029
	*/
	
	int tanggalTransaksi;
	string bulanTransaksi;
	int tahunTransaksi;
	float jumlahUang;
	float hargaBitcoin;
	
//	input
	cout <<"Silahkan Isi Data di bawah ini!"<<endl;
	cout <<endl;
	cout <<"Tanggal Transaksi\t :";
	cin >>tanggalTransaksi;
	cout <<"Bulan Transaksi\t\t :";
	cin >>bulanTransaksi;
	cout <<"Tahun Transaksi\t\t :";
	cin >>tahunTransaksi;
	cout <<"Jumlah Uang (RP)\t :";
	cin >>jumlahUang;
	cout <<"Harga per-1 Bitcoin\t :";
	cin >>hargaBitcoin;
	
	
//	output 
	cout <<endl;
	cout <<"Berikut Tanggal Transaksi dan Jumlah Bitcoinmu!"<<endl;
	cout <<endl;
	cout <<"Tanggal Transaksi\t :"<<tanggalTransaksi<<" "<<bulanTransaksi<<" "<<tahunTransaksi<<" "<<endl;
	cout <<"jumlah Bitcoin\t\t :"<<jumlahUang/hargaBitcoin<<endl;
	
	return 0;
	
}
