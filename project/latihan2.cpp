#include <stdio.h>

int main()
{
	int kehadiran;
	char spp;
	
	printf("Sudah Bayar SPP(Y/T): ");
	scanf("%c", &spp);
	printf("Masukan Presentase Kehadiran: ");
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