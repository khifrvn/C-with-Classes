#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
	
	/* Persegi panjang
	
	int luas;
	int l;
	int p;
	
	l = 7;
	p = 9;
	
	p = p + 1;
	printf("nilai l : %d\n", l);
	printf("nilai p : %d\n", p);
	luas = p * l;
	printf("Luas persegi panjang = %d", luas);
	
	*/

	/* Segitiga
	
	float A;
	float t;
	float luasSegitiga;
	
	A = 5;
	t = 9;
	
	printf("nilai A : %f\n", A);
	printf("nilai t : %f\n", t);
	luasSegitiga = A * t / 2;
	printf("Luas segitiga = %f", luasSegitiga);
	
	*/
	
	// Tahun kelahiran
	
	int tahunKelahiran;
	int usia;
	int tahun = 2021;
    printf("Masukan tahun lahir: ");
    scanf("%d", &tahunKelahiran);
	usia = 2021 - tahunKelahiran;
    printf("Tahun Lahir = %d\n",tahunKelahiran);
	printf("Umur anda = %d", usia);
	
	return 0;
	

}