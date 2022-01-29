#include <stdio.h>

int main(int argc, char *argv[])
{
	int kehadiran;
	char spp;
	
	printf("Sudah Bayar SPP? (Y/T): ");
	scanf("%c", &spp);
	
	printf("Masukan Presentasi Kehadiran: ");
	scanf("%d", &kehadiran);
	
	if (kehadiran >= 80 && spp == 'Y')
	{
		printf("Bisa Mengikuti Ujian");
	} else 
	{
		printf("Tidak Bisa Mengikuti Ujian");
		return 0;
	}
}