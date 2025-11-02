/* Multiplying 2-D matrices */

#include <stdio.h>

int main() {
    int n, m; // store the size of matrix a
    printf("Enter the number of rows and columns for matrix a: ");
    scanf("%d %d", &n, &m);

    int p, q; // store the size of matrix b
    printf("Enter the number of rows and columns for matrix b: ");
    scanf("%d %d", &p, &q);

    // Check if the matrices are compatible
    if (m != p) {
        printf("The given matrix sizes are not compatible!\n");
        return -1;
    }

    int a[n][m], b[p][q], c[n][q]; // declare 3 matrices

    // Read matrix a
    printf("Enter %d values for matrix a: ", n * m);
    for (int x = 0; x < n; x++)
        for (int y = 0; y < m; y++)
            scanf("%d", &a[x][y]);

    // Read matrix b
    printf("Enter %d values for matrix b: ", p * q);
    for (int x = 0; x < p; x++)
        for (int y = 0; y < q; y++)
            scanf("%d", &b[x][y]);

    // Multiply matrices: c = a * b
    for (int x = 0; x < n; x++)
        for (int y = 0; y < q; y++) {
            c[x][y] = 0;
            for (int z = 0; z < m; z++)
                c[x][y] += a[x][z] * b[z][y];
        }

    // Print matrix a
    printf("Matrix a:\n");
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < m; y++)
            printf("%d ", a[x][y]);
        printf("\n");
    }

    // Print matrix b
    printf("Matrix b:\n");
    for (int x = 0; x < p; x++) {
        for (int y = 0; y < q; y++)
            printf("%d ", b[x][y]);
        printf("\n");
    }

    // Print matrix c
    printf("Matrix c:\n");
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < q; y++)
            printf("%d ", c[x][y]);
        printf("\n");
    }

    return 0;
}
