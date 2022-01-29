#include <iostream.h>
#include <string.h>
using namespace std;

int main(){
	int a, b, r, t, operasi;
	float hasil;
	// Menentukan operasi
	cout << "Pilih Perhitungan" << endl;
	cout << "1. Luas Lingkaran" << endl;
	cout << "2. Luas Trapesium" << endl;
	cout << "3. Luas Tabung" << endl;
	cout << "Pilih Operasi : " << endl;
	// input operasi
	cin >> operasi;
 	
	// Perhitungan kondisi if else
	if (operasi==1){
		cout << "Masukan Jari-jari: " << endl;
		cin >> a;
		r = a*2;
		hasil = 3.14*r;
		cout << "Luas lingkran adalah:  " << a << " = " << hasil << endl;
	} else if (operasi==2){
		cout << "Masukan a: " << endl;
		cin >> a;
		cout << "Masukan b: " << endl;
		cin >> b;
		cout << "Masukan tinggi: " << endl;
		cin >> t;
		hasil = a+b/2*(t);
		cout << "Luas trapesium adalah = " << hasil << endl;
	} else if (operasi==3){
		cout << "Masukan jari-jari: " << endl;
		cin >> r;
		cout << "Masukan Tinggi: " << endl;
		cin >> t;
		hasil = 2*3.14*r*(r+t);
		cout << "Luas permukaan tabung adalah = " << hasil << endl;
	} else {
		cout << "Perhatikan kembali operasi!" << endl;
	}
}