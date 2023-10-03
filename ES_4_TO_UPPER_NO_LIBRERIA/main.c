#include <stdio.h>

int to_upper(char x) {
	char c = x - 32;
	return c;
}

int main(void) {
	const char lower = 'a';
	char upper;

	upper = to_upper(lower);
	printf(" Il nuovo carattere e' %c", upper);
	return 0;
}