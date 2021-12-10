#include <iostream>
using namespace std;

int main (){
	bool swapped;
	int temp, panjangelemen;
	
	cin >> panjangelemen;
	
	int elemen[panjangelemen];
	
	for(int i=0; i<panjangelemen; i++){
		cout << "Elemen ke " << i+1 << " : "; 
		cin >> elemen[i];
	}
	
	do {
		swapped = false; 
		for (int i=0; i<panjangelemen; i++){
			if (elemen[i] > elemen[i+1]){
			temp = elemen[i];
			elemen[i] = elemen[i+1];
			elemen[i+1] = temp;
			swapped = true;
		}
	}
	} while (swapped);
	
	for (int i=0; i<panjangelemen; i++){
		cout << elemen[i] << "  "; 
	}
}
