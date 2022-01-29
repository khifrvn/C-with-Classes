#include <iostream>

using namespace std;

char converter(){
	int nilai;
	cout << "Masukan nilai anda: ";
	cin >> nilai;
	cout << "===========" << endl;
	
	if (nilai > 90){
		cout << "Selamat nilai anda A!" << endl;
	} else if (nilai > 80){
		cout << "Selamat nilai anda B!" << endl;
	} else if (nilai > 75){
		cout << "Selamat nilai anda C!" << endl;
	} else if (nilai > 60){
		cout << "Remedial! nilai anda D!" << endl;
	} else {
		cout << "Belajar lagi! nilai anda E!" << endl;
	}
}
int main() {
    converter();
    return 0;
}
