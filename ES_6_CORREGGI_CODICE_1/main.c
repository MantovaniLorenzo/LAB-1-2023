#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x;
	printf("Inserisci un numero : ");

	scanf("%d", &x);
	if (x > 0) {
		printf("Il valore %d e' positivo \n", x);
	}
	else
		printf("Il valore %d e' negativo o pari a 0\n", x);
	return 0;
}