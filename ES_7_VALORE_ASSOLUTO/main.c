#include <stdio.h>

int val_assoluto(a) {
	if (a < 0) {
		a = -a;
		return a;
	}
	return a;
}

int main(void) {
	int x;
	printf("Inserisci un numero:");
	scanf_s("%d", &x);

	x = val_assoluto(x);

	printf("Il modulo e' %d\n", x);

	return 0;
}