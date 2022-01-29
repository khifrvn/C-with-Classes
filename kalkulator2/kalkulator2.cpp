#include <iostream.h> 
#include <string.h>
using namespace std;

int bil1,bil2;
string opt;

cout << "Operasi Kalkulator" << endl;
cout << "1. Penjumlahan" << endl;
cout << "2. Pembagian" << endl;
cout << "3. Perkalian" << endl;
cout << "4. Pembagian" << endl;
cout << "==============" << endl;

cout << "Pilih Operator(1/2/3/4): " << endl;
cin >> opt;
cout << "Bilangan Pertama: " << endl;
cin >> bil1;
cout << "Bilangan Kedua: " << endl;
cin >> bil2;

int penjumlahan (x, y){
	return x+y;
}
int pengurangan (x, y){
	return x-y;
}
int perkalian (x, y){
	return x*y;
}
int pembagian (x, y){
	return x/y;
}	
	
int main (){
	if (opt == '1'){
		cout << bil1 + " + " + bil2 + " = " + penjumlahan(bil1, bil2);
	} else if (opt == '2'){
		cout << bil1 + " - " + bil2 + " = " + pengurangan(bil1, bil2);
	} else if (opt == '3'){
		cout << bil1 + " * " + bil2 + " = " + perkalian(bil1, bil2);
	} else if (opt == '4'){
		cout << bil1 + " / " + bil2 + " = " + pembagian(bil1, bil2);
	} else {
		cout << "Operator Salah" << endl;
	}
}