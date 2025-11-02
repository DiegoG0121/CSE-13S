/* Multiplying 2-D matrices */

#include <stdio.h>

int main() {
    int n, m; //store the size of a
    printf("Enter the number of rows and columns for matrix a: ");
    /* TODO: read the size of a */
    scanf("%d %d", &n, &m);

    int p, q; //store the size of b
    printf("Enter the number of rows and columns for matrix b: ");
    /* TODO: read the size of b */
    scanf("%d %d", &p, &q);

    int a[n][m], b[p][q], c[n][q]; //declaring 3 matrices

    /* TODO: if the sizes are compatible, read a and b from the user, multiply them and store the result in c, and print all three matrices.
             if the sizes are not compatible, print an error and exit the program. Return -1. 
             your output format must match the sample output shown in the pdf. */

    if(m != p){
        printf("The given matrix sizes are not compatible!\n");
        return -1;
    }

    printf("Enter %d values for matrix a: ", n * m);
    for(int x = 0; x < n; x++) 
        for(int y = 0; y < m; y++) 
            scanf("%d", &a[x][y]);

    printf("Enter %d values for matrix b: ", p * q);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &b[i][j]);

    printf("Enter %d values for matrix b: ", p * q);
    for(int x = 0; x < n; x++)
        for(int y = 0; y < q; y++) {
            c[x][y] = 0;
            for(int z = 0; z < m; z++)
                c[x][y] += a[x][z] * b[z][y];
        }

    printf("Matrix b:\n");
    for (int x = 0; x < p; x++) {
        for (int y = 0; y < q; y++) 
            printf("%d ", b[x][y]);
        printf("\n");
    }

    printf("Matrix c:\n");
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < q; y++)
            printf("%d ", c[x][y]);
        printf("\n");
    }




    return 0;
}
