#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);

	double pi = 0.;
	/* TODO: Add the code below to compute value of pi using the formula given in the pdf */
	
	double factor = 1.0; //total number for 1/16^i for iteration

	//loops from 0 to n
	for (int i = 0; i <= n; i++) {
        double term = (4.0 / (8 * i + 1) - 2.0 / (8 * i + 4) - 1.0 / (8 * i + 5) - 1.0 / (8 * i + 6));
        pi += factor * term; //16^i * term(already calculated)
        factor /= 16.0;
    }

	//will print the PI #
	printf("PI = %.10f\n", pi);
	return 0;
}
