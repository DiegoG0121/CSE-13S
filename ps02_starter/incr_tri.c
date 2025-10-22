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
    
    // stores the input in vairable n
    scanf("%d", &n);

    // loops based on numbers of rows
    for(int i = 0; i < n; i++){
        // prints the latter of asterix
        for(int c = 0; c < i+1; c++){
            printf("* "); // prints the *
        }
        printf("\n"); // prints a newline
    }

    return 0;
}