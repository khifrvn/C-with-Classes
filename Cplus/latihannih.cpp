#include <iostream>
#include <string>
using namespace std;

int main(){
	for (int i = 0; i < 5; i++)
		cout << "Halo" << endl;
	
	int x = 20;
	int y = 10;
	
	if (x - y > 20){
		cout << "Hasil salah" << endl;
	} else {
		cout << "Benar!" << endl;
	}
}