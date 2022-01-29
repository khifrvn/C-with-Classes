#include <iostream.h>
#include <string.h>

using namespace std;

int main(){
	int bil1, bil2;
	float hasil;
	string opt;
	
	cout << "KALKULATOR BERJALAN!" << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	
	cout << "Masukan bilangan pertama: " << endl;
	cin >> bil1;
	cout << "Masukan bilangan kedua: " << endl;
	cin >> bil2;
	cout << "Pilih Operasi: " << endl;
	cin >> opt;
	
	if (opt==1){
		hasil = bil1+bil2;
	} else if (opt==2){
		hasil = bil1-bil2;
	} else if (opt==3){
		hasil = bil1*bil2;
	} else if (opt==4){
		hasil = bil1/bil2;
	} else {
		cout << "Operasi Salah!" << endl;
	}
	
	cout << "Hasil dari " << bil1 << opt << bil2 << " = " << hasil << endl;

}