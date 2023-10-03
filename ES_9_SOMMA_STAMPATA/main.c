#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int somma(x, y, z) {

	int ris = x + y + z;

	return ris;
}

int main(void) {

	int operand1, operand2, operand3, result;

	printf("Inserisci il valore del primo numero:");
	scanf("%d", &operand1);
	printf("Inserisci il valore del secondo numero:");
	scanf("%d", &operand2);
	printf("Inserisci il valore del terzo numero:");
	scanf("%d", &operand3);

	result = somma(operand1, operand2, operand3);
	printf("Il risultato della somma e' %d", result);
	return 0;
}