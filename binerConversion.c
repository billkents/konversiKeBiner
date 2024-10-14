#include <stdio.h>

int main() {
	int Biner, bobot, bit, Desimal;
	bobot = 1;
	Desimal = 0;

	printf("Masukkan bilangan: ");
	scanf("%d", &Biner);

	while(Biner>0) {
		bit = Biner%2;
		Desimal = Desimal + (bit*bobot);
		Biner = Biner/2;
		bobot = bobot*10;
	}
	
	printf("%d", Desimal);

	return 0;
}
