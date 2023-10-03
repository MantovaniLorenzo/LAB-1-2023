#include <stdio.h>

int area_rettangolo(const x, const y) {
	int ris = x * y;
	return ris;

}

int main(void) {
	const int b = 4;
	const int h = 7;
	int area;

	area = area_rettangolo(b, h);
	printf("L'area e' %d. \n", area);
	return 0;
}