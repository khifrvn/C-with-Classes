#include <iostream>

using namespace std;

void nilai(){
	int convert;
	cin >> convert;
	
	if (convert >= 85) {
        cout << "Nilai anda: A";
    }
    else if (convert >= 75) {
        cout << "Nilai anda: B";
    }
    else if (convert >= 65) {
        cout <<"Nilai anda: C";
    }
    else if (convert >= 50) {
        cout <<"Nilai anda: D";
    }
    else {
        cout <<"Nilai anda: E";
    }  
}

int main(){
	nilai();
	return 0;
}