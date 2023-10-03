#include <stdio.h>

int main(void) {

	const double a1 = 0.5;
	const double b1 = 1.4;
	const double c1 = 0.7;
	const double a2 = 2.0;
	const double b2 = 3.7;
	const double c2 = 1.9;
	double x;
	double y;

	y = ((c2 * a1) - (a2 * c1)) / ((b2 * a1) - (a2 * b1));  /* esplicitato il calcolo poichè
															in c non è possibile utilizzare incognite*/
	x = (c1 - b1 * y) / a1;

	printf("I risultati sono x = %f e y= %f", x, y);

		return 0;

}