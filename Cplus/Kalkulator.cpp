#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
	int bil1, bil2, pil;
	float hasil;
	string operasi;
	
	cout << "PILIH OPERASI KALKULATOR!" << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perklaian" << endl;
	cout << "4. pembagian" << endl;
	cout << "\n";
	
	cout << "Masukan Pilihan: " << endl;
	cin >> pil;
	cout << "Masukan Bilangan 1: " << endl;
	cin >> bil1;
	cout << "Masukan Bilang 2: " << endl;
	cin >> bil2;
	
	switch (pil){
	case 1 : hasil = bil1+bil2;
			operasi = '+';
			break;
	case 2 : hasil = bil1-bil2;
			operasi = '-';
			break;
	case 3 : hasil = bil1*bil2;
			operasi = '*';
			break;
	case 4 : hasil = bil1/bil2;
			operasi = '/';
			break;
		default :
			cout << "Salah masukan operator" << endl;
	}
	cout << "----------------------------" << endl;
	cout << "    " << bil1 << operasi << bil2 << " = " << hasil << endl;
	cout << "----------------------------" << endl;
}	