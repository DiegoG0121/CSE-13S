#include <stdio.h>

int main() {
    int n = 0;
    double x, total = 0.0, average=0.0;

    while (scanf("%lf", &x) == 1) { 
        /* TODO: complete the loop to calculate and print the running total and average */
        total += x;
        double count;
        count++;

        average = total / count;
        printf("Total=%.3lf Average=%.3lf\n", total, average);
    };

    return 0;
}
