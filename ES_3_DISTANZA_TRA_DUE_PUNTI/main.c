#include <stdio.h>

double distanza(const double a, const double b, const double c, const double d) {
	double ris = (a - c) * (a - c) + (b - d) * (b - d);
	return ris;
}

int main(void) {
	const double x1 = 0.5;
	const double y1 = 1.4;
	const double x2 = 0.7;
	const double y2 = 2.0;
	double square_dist;

	square_dist = distanza(x1, y1, x2, y2);
	printf("La distanza quadrata euclidea dei punti e' %f", square_dist);
	return 0;
}