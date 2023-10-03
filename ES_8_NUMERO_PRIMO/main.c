#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int numero_primo(a) {

	int ris = 0;
	int i = 2;

	if (a == 0 || a == 1) {
		printf("Il numero inserito non e' primo");
	}
	else do {

		ris = a % i;
		i++;
		if (ris == 0) {
			printf("Il numero inserito non e' primo");

		}
		else printf("Il numero inserito e' primo");
		break;

	} while (i < a);

}

int main(void) {
	int x;
	printf("Inserire un numero :");
	scanf("%d", &x);

	numero_primo(x);

	return 0;

}