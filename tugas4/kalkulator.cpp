#include<iostream>

using namespace std;

int x,y,o,j,k,l,m;
void Pertama();
void Pertama()
{
	cout<<"\nMasukkan Nilai Pertama = "; cin>>x;
	cout<<"Masukkan Nilai Kedua = "; cin>>y;
}
void Penjumlahan();
void Penjumlahan()
{
	Pertama();
	j=x+y;
	cout<<"\nHasil dari penjumlahan antara "<<x<<" dan "<<y<<" adalah "<<j<<endl;
}
void pengurangan();
void pengurangan()
{
	Pertama();
	k=x-y;
	cout<<"\nHasil dari Pengurangan antara "<<x<<" dan "<<y<<" adalah "<<k<<endl;
}
void perkalian();
void perkalian()
{
	Pertama();
	l=x*y;
	cout<<"\nHasil dari Perkalian antara "<<x<<" dan "<<y<<" adalah "<<l<<endl;
}
void pembagian();
void pembagian()
{
	Pertama();
	m=(x/y);
	cout<<"\nHasil dari Pembagian antara "<<x<<" dan "<<y<<" adalah "<<m<<endl;
}
void keluar();
void keluar()
{
	cout<<"Thank's For You !"<<endl;
}
main()
{
	cout<<"\tMENU UTAMA"<<endl;
	cout<<"=========================="<<endl;
	cout<<"1. OPERASI PENJUMLAHAN"<<endl;
	cout<<"2. OPERASI PENGURANGAN"<<endl;
	cout<<"3. OPERASI PERKALIAN"<<endl;
	cout<<"4. OPERASI PEMBAGIAN"<<endl;
	cout<<"5. KELUAR / OUT"<<endl;
	cout<<"\n=> MASUKKAN KODE (1-5) = "; cin>>o;
switch (o)
{
	case 1: Penjumlahan(); break;
	case 2: pengurangan(); break;
	case 3: perkalian(); break;
	case 4: pembagian(); break;
	case 5: keluar (); break;
	default : cout<<"Salah input"<<endl;break;
}
system("pause");
return 0;
}