#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double ris(a, b) {
	double ris_eq=0;

	if (a== 0) {
		printf("La divisione e' impossibile");

	} else ris_eq = -((double)b / a);
	printf("Il risultato dell'equazione e' x= %f", ris_eq);
	return ris_eq;
	
}


int main(void) {
	int a, b, x;

	printf("Inserisci il valore di a:");
	scanf("%d", &a);
	printf("Inserisci il valore di b:");
	scanf("%d", &b);


	x = ris(a, b);
	
	return 0;

}