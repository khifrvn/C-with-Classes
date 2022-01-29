#include <stdio.h>

int main()
{
	float ketinggianAir;
	printf("Masukan Ketinggian Air: ");
	scanf("%f", &ketinggianAir);
	
	if (ketinggianAir >= 1.5)
	{
		printf("Warning Ketinggian Air %f Meter", ketinggianAir);
	} else
	{
		printf("Ketinggian Air Normal di %f Meter", ketinggianAir);
	}
	return 0;
}