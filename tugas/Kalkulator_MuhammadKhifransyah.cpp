#include<iostream>
#include<string>
using namespace std;

int main()
{

int bil1, bil2, pilihan;

cout << "=== Pilih Operasi ===\n";
cout << "1. Penjumlahan\n";
cout << "2. Pengurangan\n";
cout << "3. Perkalian\n";
cout << "4. Pembagian\n";
cout << "5. Modular\n";
cout << "Operasi: ";
cin >> pilihan;

cout << "\n";

cout << "Masukan bilangan pertama: ";
cin >> bil1;

cout << "Masukan bilangan kedua: ";
cin >> bil2;

cout << "\n";

switch(pilihan)
{
case 1:
cout << "Hasil " << bil1 << " + " << bil2 << " : " << bil1+bil2 << endl;
break;
case 2:
cout << "Hasil " << bil1 << " - " << bil2 << " : " << bil1-bil2 << endl;
break;
case 3:
cout << "Hasil " << bil1 << " * " << bil2 << " : " << bil1*bil2 << endl;
break;
case 4:
cout << "Hasil " << bil1 << " / " << bil2 << " : " << bil1/bil2 << endl;
break;
case 5:
cout << "Hasil " << bil1 << " % " << bil2 << " : " << bil1%bil2 << endl;
break;
default:
cout << "Salah Operasi/input\n";
}
return 0;
}
