#include <iostream>
#include <string>
using namespace std;

int main(){
	int bil1, bil2, opt;
	float hasil;
	string operasi;
	
	cout << "PILIH OPERASI" << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "===================" << endl;
	
	cout << "Pilih Operator: " << endl;
	cin >> opt;
	cout << "Masukan bilangan pertama: " << endl;
	cin >> bil1;
	cout << "Masukan bilangan kedua: " << endl;
	cin >> bil2;
	cout << "====================" << endl;
	
	if (opt == 1) {
		hasil = bil1+bil2;
		cout << "Hasil " << bil1 << " + " << bil2 << " = " << hasil;
	} else  if (opt == 2) {
		hasil = bil1-bil2;
		cout << "Hasil " << bil1 << " - " << bil2 << " = " << hasil;
	} else if (opt == 3) {
		hasil = bil1*bil2;
		cout << "Hasil " << bil1 << " * " << bil2 << " = " << hasil;
	} else if (opt == 4) {
		hasil = bil1/bil2;
		cout << "Hasil " << bil1 << " / " << bil2 << " = " << hasil;
	} else {
		cout << "Operator Salah!" << endl;
	}	
}
