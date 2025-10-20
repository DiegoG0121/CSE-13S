/* Implement an increasing triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

*
* *
* * *
* * * *
* * * * *

*/

#include<stdio.h>

int main() {
    int n;
    printf("Enter n (number of rows): ");

    /* TODO: read the value for n and print the first n rows of the above pattern */
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int c = 0; c < i+1; c++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}